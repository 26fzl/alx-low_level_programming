#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strg;
	char *s;
	unsigned int ind;

	va_start(strg, n);

	for (ind = 0; ind < n; ind++)
	{
		s = va_arg(strg, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (ind < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(s);
}

