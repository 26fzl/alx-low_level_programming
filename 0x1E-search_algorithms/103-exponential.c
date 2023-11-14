#include "search_algos.h"
/**
  * binarysearch - searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @lft: starting of index.
 * @rgt: ending of index.
 * @value: the value to search for.
 * Return: the index where value is located.
 */
int binarysearch(int *array, size_t lft, size_t rgt, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	while (rgt >= lft)
	{
		printf("Searching in array: ");
		for (x = lft; x < rgt; x++)
		{
			printf("%d, ", array[x]);
		}
		printf("%d\n", array[x]);

		x = lft + (rgt - lft) / 2;
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

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 * Return: the index where value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, rgt;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	rgt = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, rgt);
	return (binarysearch(array, x / 2, rgt, value));
}
