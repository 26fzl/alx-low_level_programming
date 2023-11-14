#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm.
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where 'value' is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t lft = 0, rght = 0, step = sqrt(size), x;

	if (!array || size == 0)
	{
		return (-1);
	}
	while (rght < size && array[rght] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", rght, array[rght]);
		lft = rght;
		rght += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", lft, rght);
	x = lft;
	while (x <= rght && x < size)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}

	return (-1);
}
