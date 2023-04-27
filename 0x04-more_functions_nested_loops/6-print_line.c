#include "main.h"
/**
 * print_line -  draw a straight line in the terminal.
 * @n: the number of line to draw
 */
void print_line(int n)
{

	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

