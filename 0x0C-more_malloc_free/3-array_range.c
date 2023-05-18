#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integers
 * @min: min value stored
 * @max: max value stored
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *pntr;
	int x, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	pntr = malloc(sizeof(int) * s);

	if (pntr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		pntr[x] = min++;

	return (pntr);
}

