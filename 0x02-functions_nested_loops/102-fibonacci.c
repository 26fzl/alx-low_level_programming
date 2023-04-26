#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 on successful execution
 */
int main(void)
{
	int i = 0;
	int j = 1, k = 2, temp;

	while (i < 50)
	{
		if (i == 0)
			printf("%d", j);
		else if (i == 1)
			printf(", %d", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %d", k);
		}
		i++;
	}
	printf("\n");
	return (0);
}
