#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: size of the array
 * @c: char
 * Return: the array filled
 */
char *create_array(unsigned int size, char c)
{
	char *h;
	unsigned int i;

	if (size == 0)
		return (NULL);
	h = malloc(size * sizeof(char));

	if (h == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		h[i] = c;
	}
	return (h);
}
