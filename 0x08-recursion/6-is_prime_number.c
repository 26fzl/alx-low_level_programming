#include <stdio.h>
#include "main.h"
int check_prime(int n, int x);
/**
 * is_prime_number - return if the number is prime
 * @n: the number to check
 * Return: 1 if prime number , if it isn't 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}
/**
 * check_prime - check if the number is prime
 * @n: the number to check
 * @x: int
 * Return: int
 */
int check_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (check_prime(n, x - 1));
}
