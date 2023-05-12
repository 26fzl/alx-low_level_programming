#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Write a program that adds positive numbers.
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int s = 0, x;
	int d;
	char *str;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			str = argv[x];
			for (d = 0; str[d] != '\0'; d++)
			{
				if (str[d] < 48 || str[d] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (x = 1; x < argc; x++)
	{
		s += atoi(argv[x]);
	}
	printf("%d\n", s);
	return (0);
}
