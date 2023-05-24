#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int byt, cnt;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (cnt = 0; cnt < byt; cnt++)
	{
		printff("%02hhx\n", *((char *)main + cnt));
		if (cnt < byt - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
