#include "function_pointers.h"
/**
 * int_index - searche for an integer
 * @array: array
 * @size: size of the elements in array
 * @cmp: pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (x = 0; x < size; x++)
			{
				if (cmp(array[x]))
					return (x);
			}
		}
	}
	return (-1);
}
