#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers, followed by a new line.
 * @separator: The string
 * @n: The number of integers
 * @...: A variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int ind;

	va_start(numn, n);

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(numb, int));

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numb);
}

