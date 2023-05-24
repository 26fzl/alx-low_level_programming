#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execute function given as a param on each elem
 * @array: array
 * @size: size
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array && action && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
