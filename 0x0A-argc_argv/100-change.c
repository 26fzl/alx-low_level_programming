#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum number of coins.
 * @argc: arguments
 * @argv: arguments
 * Return: if Error 1, otherwise 0
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int nm, x, r;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nm = atoi(argv[1]);
	r = 0;

	if (nm < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && nm >= 0; x++)
	{
		while (nm >= coins[x])
		{
			r++;
			nm -= coins[x];
		}
	}

	printf("%d\n", r);
	return (0);
}



