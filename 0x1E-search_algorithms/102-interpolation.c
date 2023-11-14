#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: the first index where value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t x, lft = 0, rgt = size - 1;

	if (!array)
	{
		return (-1);
	}
	while (rgt >= lft)
	{
		x = lft + (((double)(rgt - lft) /
		(array[rgt] - array[lft])) * (value - array[lft]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
		{
			return (x);
		}
		if (array[x] > value)
		{
			rgt = x - 1;
		}
		else
		{
			lft = x + 1;
		}
	}
	return (-1);
}
