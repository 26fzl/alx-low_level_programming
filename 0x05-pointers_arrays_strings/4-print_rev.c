#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;

	while (a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
