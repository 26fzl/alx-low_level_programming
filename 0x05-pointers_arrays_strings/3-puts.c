#include "main.h"
/**
 * _puts -print a string to stdout
 * @str: the string to print
 * Return: the lenght of string
 *
 */
void _puts(char *str)
{
	while (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
