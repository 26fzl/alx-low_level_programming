#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *stg, *separ = "";
	va_list ls;

	va_start(ls, format);

	separ = "";

	while (format && format[i])
	{
		switch (format[i])
		{

			case 'c':
				printf("%s%c", separ, va_arg(ls, int));
				break;
			case 'i':
				printf("%s%d", separ, va_arg(ls, int));
				break;
			case 'f':
				printf("%s%f", separ, va_arg(ls, double));
				break;
			case 's':
				stg = va_arg(ls, char *);
				if (stg == NULL)
					stg = "(nil)";
				printf("%s%s", separ, stg);
				break;
			default:
				i++;
				continue;
		}
		separ = ", ";
		i++;
	}
	printf("\n");
	va_end(ls);
}
