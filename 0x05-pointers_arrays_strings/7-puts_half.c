#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 * Return: nothing
 */
void puts_half(char *str)
{
	int e;

	for (e = 0; str[e] != '\0'; e++)
	{
		e++;
	}
	for (e /= 2; str[e] != '\0'; e++)
	{
		_putchar(str[e]);
	}
	_putchar('\n');
}
