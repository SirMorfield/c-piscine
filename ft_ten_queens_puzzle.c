#include <unistd.h>

/*start with ten_queens_puzzle(void) function at the bottom*/

//only works for numbers under 10, so 10 by 10 is the max. otherwise will need ft_putnbr
//prints out the row positions in order of the columns
void	write_queen_position(int *map)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = map[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

//checks if you can put a queen on the current column/row by checking previous entries
//the second and third statements check if the slope is 1 or -1 (change in y over change in x)
int	check_position(int *map, int column, int row)
{
	int i;

	i = column - 1;
	while (i >= 0)
	{
		if (map[i] == row)
			return (0);
		if ((double)(row - map[i]) / (double)(column - i) == 1)
			return (0);
		if ((double)(row - map[i]) / (double)(column - i) == -1)
			return (0);
		i--;
	}
	return (1);
}

//the function calls itself when it finds a queen position for the current column
//if it can't find a correct queen position in the current column,
//it will return to the previous function and find the next queen position, until it has exhausted all possibilities
//when it reaches the final column (column == 9) and finds a queen position, it will write the solution
//ret = total solutions found
int	place_queens(int *map, int column)
{
	int ret;
	int row;

	ret = 0;
	row = 0;
	while (row < 10)
	{
		if (check_position(map, column, row) == 1)
		{
			map[column] = row;
			if (column == 9)
			{
				write_queen_position(map);
				write(1, "\n", 1);
				ret++;
			}
			else
				ret = ret + place_queens(map, column + 1);
		}
		row++;
	}
	return (ret);
}

//the map array represents the board. Where the indexes represent the columns, and the int value represent the rows
//works like coordinates (columns = x, row = y), so if map[4] = 2, it means theres a queen at (4, 2)
int	ten_queens_puzzle(void)
{
	int map[10];
	int i;

	i = 0;
	while (i < 10)
	{
		map[i] = -1;
		i++;
	}
	return (place_queens(map, 0));
}

#include <stdio.h>

int		main(void)
{
	printf("%i combinations\n", ten_queens_puzzle());
	return (0);
}
