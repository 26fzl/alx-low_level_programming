#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int is_digit(char *s);
int _strlen(char *s);
void errors(void);




/**
 * is_digit - check if the string have a non-digit char
 * @s: the string to be evaluated
 * Return: 0 if there is a non-digit, 1 otherwise
 */
int is_digit(char *s)
{
	int w = 0;

	while (s[w])
	{
		if (s[w] < '0' || s[w] > '9')
			return (0);
		w++;
	}
	return (1);
}

/**
 * _strlen - return the length of a string
 * @s: the string to be  evaluated
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int w = 0;

	while (s[w] != '\0')
	{
		w++;
	}
	return (w);
}

/**
 * errors - correct errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, w, c, d1, d2, *rslt, x = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	rslt = malloc(sizeof(int) * l);
	if (!rslt)
		return (1);
	for (w = 0; w <= l1 + l2; w++)
		rslt[w] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = s1[l1] - '0';
		c = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			d2 = s2[l2] - '0';
			c += rslt[l1 + l2 + 1] + (d1 * d2);
			rslt[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			rslt[l1 + l2 + 1] += c;
	}
	for (w = 0; w < l - 1; w++)
	{
		if (rslt[w])
			x = 1;
		if (x)
			_putchar(rslt[w] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(rslt);
	return (0);
}
