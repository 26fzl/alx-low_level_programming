#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return the sum of all its paramters.
 * @n: number of paramters
 * @...: A variable number of paramters to calculate the sum of.
 * Return: 0 otherwise sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);

	return (sum);
}

