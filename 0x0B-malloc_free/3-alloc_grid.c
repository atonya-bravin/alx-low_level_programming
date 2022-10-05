#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 2 dimensional array of integers
 *
 * @width: the width of the 2 dimensional array
 * @height: the height of the 2 dimesional array
 *
 * Return: Always NULL (fail)
 */

int **alloc_grid(int width, int height)
{
	int rows_counter = 0;
	int column_counter = 0;
	int **grid = malloc(sizeof(int *) * width);

	if (width <= 0 || height <= 0)
		return (NULL);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (column_counter = 0; column_counter < width; column_counter++)
	{
		grid[column_counter] = malloc(sizeof(int) * height);
		if (grid[column_counter] == NULL)
		{
			free(grid[column_counter]);
			return (NULL);
		}
	}

	for (column_counter = 0; column_counter < width; column_counter++)
	{
		for (rows_counter = 0; rows_counter < height; rows_counter++)
			grid[column_counter][rows_counter] = 0;
	}
	return (grid);
}
