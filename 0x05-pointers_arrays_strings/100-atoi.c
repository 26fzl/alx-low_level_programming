#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: converted integer
 */
int _atoi(char *s)
{
	int b = 1;
	unsigned int a = 0;

	do {
		if (*s == '-')
			a *= -1;
		else if (*s >= '0' && *s <= '9')
			a = (a * 10) + (*s - '0');
		else if (a > 0)
		break;
		} while (*s++);
		return (a * b);
}
