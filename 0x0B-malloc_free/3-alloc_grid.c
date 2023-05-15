#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a two dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int w, x, y, z;
	int **h;

	if (width <= 0 || height <= 0)
		return (NULL);

	h = malloc(sizeof(int *) * height);

	if (h == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		h[w] = malloc(sizeof(int) * width);

		if (h[w] == NULL)
		{
			for (x = 0; x < w; x++)
				free(h[x]);
			free(h);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
		{
			h[y][z] = 0;
		}
	}
	return (h);
}
