#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free a 2 dimensional grid 
 * @grid: the grid
 * @height: height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

