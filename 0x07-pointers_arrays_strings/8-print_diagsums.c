#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print the sum of the two diagonals
 * of a square matrix of integers
 *@size: input
 *@a: input
 *Return: 0
 */
void print_diagsums(int *a, int size)
{
	int k, s1, s2;

	s1 = 0;
	s2 = 0;

	for (k = size - 1; k >= 0; k--)
	{
		s2 += a[k * size + (size - k - 1)];
	}
	for (k = 0; k < size; k++)
	{
		s1 = s1 + a[k * size + k];
	}
	printf("%d, %d\n", s1, s2);
}
