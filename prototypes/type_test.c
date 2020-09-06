#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
	printf("%lu\n", sizeof(bool));
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(long));
	printf("%lu\n", sizeof(long long));
	printf("%lu\n", sizeof(__int128));

	printf("\n");

	printf("%lu\n", sizeof(float));
	printf("%lu\n", sizeof(double));
	printf("%lu\n", sizeof(long double));

	printf("\n");

	printf("float max          %.10e\n", FLT_MAX);
	printf("float min          %.10e\n", FLT_MIN);
	printf("float digits       %i\n", FLT_MANT_DIG);

	printf("double max         %.10e\n", DBL_MAX);
	printf("double min         %.10e\n", DBL_MIN);
	printf("double digits      %i\n", DBL_MANT_DIG);

	printf("long double max    %.10Le\n", LDBL_MAX);
	printf("long double min    %.10Le\n", LDBL_MIN);
	printf("long double digits %i\n", LDBL_MANT_DIG);

	return (0);
}
