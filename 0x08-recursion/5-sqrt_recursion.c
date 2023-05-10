#include "main.h"
int _sqrt(int n, int j);
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to be calculated
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
/**
 * _sqrt - calculate natural square root
 * @n: number to be calculated
 * @j: iterator
 * Return: natural square root
 */
int _sqrt(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (_sqrt(n, j + 1));
}
