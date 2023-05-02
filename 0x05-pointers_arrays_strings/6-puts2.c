#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: the string to print
 * Return: nothing
 */
void puts2(char *str)
{
	int y = 0;
	int x;

	while (str[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < y; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
