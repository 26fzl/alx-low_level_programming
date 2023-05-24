#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return the sum of two numbers.
 * @a: The first one.
 * @b: The second one.
 * Return: The sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return the difference of two numbers.
 * @a: The first one
 * @b: The second one
 * Return: The difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: The first one.
 * @b: The second one
 * Return: The product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Return the division of two numbers.
 * @a: The first one
 * @b: The second one
 * Return: The quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Return the remainder of the division of two numbers.
 * @a: The first one
 * @b: The second one
 * Return: The remainder of the division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

