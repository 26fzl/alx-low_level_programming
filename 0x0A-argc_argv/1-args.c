#include <stdio.h>
#include "main.h"

/**
 * main - the number of arguments passed into it
 * @argc: argument
 * @argv: argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
