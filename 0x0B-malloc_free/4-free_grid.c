#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the 2 dimensional array of int using alloc_grid
 * @height: type int height.
 * @grid: type int char
 * Return: Null if 0 or negative.
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
