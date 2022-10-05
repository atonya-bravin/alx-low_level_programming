#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional array off allocated memory
 *
 * @grid: pointer with alocated memory
 * @height: number of rows
 *
 * Return: Allways Nothing
 */

void free_grid(int **grid, int height)
{
	int rows_counter;

	for (rows_counter = 0; rows_counter < height; rows_counter++)
		free(grid[rows_counter]);
	free(grid);
}
