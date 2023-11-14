#include "search_algos.h"

/**
  * advanced_binary_recursive - Searches recursively for a value in a sorted
  *                             array of integers using binary search.
  * @array: A pointer to the first element of the [sub]array to search.
  * @lft: The starting index of the [sub]array to search.
  * @rgt: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t lft, size_t rgt, int value)
{
	size_t x;

	if (rgt < lft)
		return (-1);

	printf("Searching in array: ");
	for (x = lft; x < rgt; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);

	x = lft + (rgt - lft) / 2;
	if (array[x] == value && (x == lft || array[x - 1] != value))
		return (x);
	if (array[x] >= value)
		return (advanced_binary_recursive(array, lft, x, value));
	return (advanced_binary_recursive(array, x + 1, rgt, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *                   of integers using advanced binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
