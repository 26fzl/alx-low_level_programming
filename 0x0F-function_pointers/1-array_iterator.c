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
	unsigned int i = 0;

	if (size > 0 && array && action == NULL)

	while (i < size)
	{
		action(array[i]);
		i++
	}
}
