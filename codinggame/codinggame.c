#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <math.h>

int     distance(int x1, int y1, int x2, int y2)
{
    int square_difference_x = (x2 - x1) * (x2 - x1);
    int square_difference_y = (y2 - y1) * (y2 - y1);
    int distance = sqrt(square_difference_x + square_difference_y);
    return (distance);
}

float     distancef(float x1, float y1, float x2, float y2)
{
    float square_difference_x = (x2 - x1) * (x2 - x1);
    float square_difference_y = (y2 - y1) * (y2 - y1);
    float distance = sqrt(square_difference_x + square_difference_y);
    return (distance);
}

int     map(int x, int in_min, int in_max, int out_min, int out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

float     mapf(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

float	degrees(float radians) {
    return (radians * (180.0 / M_PI));
}

float	radians(float degrees) {
    return (degrees * (M_PI / 180.0));
}

int		float2int(float x)
{
	return ((int)(x + 0.5));
}

void	get_point(float angle_rad, float len, int start_x, int start_y, int *end_x, int *end_y) {
	*end_x = start_x + float2int(len * cos(angle_rad));
	*end_y = start_y + float2int(len * sin(angle_rad));
}

int		apply_bounds(int x, int min, int max)
{
	if (x < min)
		return (min);
	if (x > max)
		return (max);
	return (x);
}

// end libs

#define POD_THRUST_MAX 100
#define POD_FORCEFIELD_RADIUS 400
#define POD_SPEED_MAX 670
#define POD_COLISSION_DISTANCE 946
#define CP_RADIUS 600
#define FIELD_SIZE_X 16000
#define FIELD_SIZE_Y 9000

typedef struct	s_input
{
    int     turn;

	int		pod_x;
    int		pod_y;
    int     prev_pod_x;
    int     prev_pod_y;
    float   speed;				// 0 - 1
    float	angle_rad;
	float	rad_off_track;		// -M_Pi - M_PI
	float	rad_off_track_abs;	// 0 - M_PI
    float   eta;

    int		cp_x;
    int		cp_y;
    float	cp_dist;
	float	cp_angle_rad;

    int		opponent_x;
    int		opponent_y;
}				t_input;

typedef struct	s_pod
{
	int		target_x;
	int		target_y;
	int		thrust;
}				t_pod;

void	set_input(t_input *input)
{
	(input->turn)++;

	int unused;
	int deg_off_track;
	scanf("%d%d%d%d%d%d", &input->pod_x, &input->pod_y, &input->cp_x, &input->cp_y, &unused, &deg_off_track);
	if (input->turn == 0)
    {
        input->prev_pod_x = input->pod_x;
        input->prev_pod_y = input->pod_y;
    }

	float distance_traveled = distancef((float)(input->prev_pod_x), (float)(input->prev_pod_y), (float)(input->pod_x), (float)(input->pod_y));
    input->speed = mapf(distance_traveled, 0, POD_SPEED_MAX, 0, 1);
    fprintf(stderr, "speed           %f\n", input->speed);
    input->prev_pod_x = input->pod_x;
    input->prev_pod_y = input->pod_y;

	float x = (float)(input->cp_x) - (float)(input->pod_x);
	float y = (float)(input->cp_y) - (float)(input->pod_y);
	input->cp_angle_rad = atan2(y, x);
	input->angle_rad = input->angle_rad + radians((float)(deg_off_track));
    input->rad_off_track = radians(deg_off_track);
    fprintf(stderr, "deg off track   %d\n", deg_off_track);
    input->rad_off_track_abs = fabs(input->rad_off_track);
	input->cp_dist = distancef((float)(input->pod_x), (float)(input->pod_y), (float)(input->cp_x), (float)(input->cp_y));
    fprintf(stderr, "cp dist         %f\n", input->cp_dist);
    if (distance_traveled < 0.0001)
        input->eta = 999999;
    else
        input->eta = input->cp_dist / distance_traveled;
    fprintf(stderr, "eta             %f\n", input->eta);

	scanf("%d%d", &input->opponent_x, &input->opponent_y);
}

void	get_target(int *target_x, int *target_y, t_input *input)
{
    float oversteer;
	float max_rad_off_track = radians(140);
    if (input->rad_off_track_abs > max_rad_off_track) {
        oversteer = 0;
	}
    else {
        oversteer = mapf(input->rad_off_track_abs, 0, max_rad_off_track, radians(0.5), radians(10));
	}
	if (input->rad_off_track < radians(0)) {
		oversteer = -oversteer;
	}

    // fprintf(stderr, "oversteer       %f\n", degrees(oversteer));
    float angle_rad = input->cp_angle_rad + oversteer;
    get_point(angle_rad, input->cp_dist, input->pod_x, input->pod_y, target_x, target_y);
}

int     get_thrust(t_input *input)
{
    if (input->eta < 10)
    {
        float pervent_overshoot_at = (CP_RADIUS + 800) * input->speed;
        if (input->cp_dist < pervent_overshoot_at && input->speed > 0.7)
        {
            fprintf(stderr, "prevent_overshoot\n");
            return (int)(mapf(input->cp_dist, CP_RADIUS, pervent_overshoot_at, 20, 100));
        }
    }

    float start_breaking_at = mapf(input->speed, 0, 1, CP_RADIUS, 2600);
    fprintf(stderr, "break_at        %f\n", start_breaking_at);

    if (input->cp_dist > start_breaking_at)
    {
        if (input->rad_off_track_abs > radians(75))
            return (3);
        else
            return (POD_THRUST_MAX);
    }
    float max_rad_off_track = mapf(input->eta, 1, 60, radians(0.1), radians(20));

    fprintf(stderr, "max_off_track   %f\n", degrees(max_rad_off_track));
    if	(input->rad_off_track_abs > max_rad_off_track)
    {
        float thrust = mapf(input->rad_off_track_abs, radians(0), radians(180), POD_THRUST_MAX, 1);
    	return (float2int(thrust));
    }
    else
        return (POD_THRUST_MAX);
}

bool	used_boost = false;
float	min_boost_distance =  1100;
bool	do_boost(int thrust, t_input *input)
{
	if (used_boost)
		return (false);
	if (thrust != POD_THRUST_MAX)
		return (false);
	float	allowed_boost_angle = mapf(input->speed, 0, 1, radians(1), radians(2.5));
	int		min_cp_dist = float2int(mapf(input->speed, 0, 1, CP_RADIUS + 200, min_boost_distance));
	bool	distance_good = input->cp_dist >= min_cp_dist;
	bool	angle_good = input->rad_off_track_abs <= allowed_boost_angle;
	if (distance_good && angle_good) {
		used_boost = true;
		return (true);
	}
	min_boost_distance -= 80 * (float)(input->turn + 1);
	// allowed_boost_angle += 0.05;
	return (false);
}

int		main(void)
{
	t_input input;
    input.turn = -1;
	t_pod pod;
    while (true) {
		set_input(&input);

		get_target(&pod.target_x, &pod.target_y, &input);

		pod.thrust = get_thrust(&input);
        fprintf(stderr, "thrust          %d\n", pod.thrust);

		if (do_boost(pod.thrust, &input))
			printf("%d %d BOOST\n", pod.target_x, pod.target_y);
		else
			printf("%d %d %d\n", pod.target_x, pod.target_y, pod.thrust);

    	// fprintf(stderr, "used_boost      %d\n", used_boost);
    }
    return (0);
}
