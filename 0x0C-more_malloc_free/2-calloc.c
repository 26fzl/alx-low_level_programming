#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements in the array
 * @size: size of elements
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	void *y;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	y = malloc(size * nmemb);

	if (y == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (size * nmemb); x++)
	{
		*((char *)(y) + x) = 0;
	}
	return (y);
}
