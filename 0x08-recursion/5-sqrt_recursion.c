#include "main.h"
int _sqrt(int n, int i);
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
 * @i: iterator
 * Return: natural square root
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
