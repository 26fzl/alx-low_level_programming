#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, u;

	for (i = 0; i < 100; i++)
	{
		for (u = 0; u < 100; u++)
		{
			if (i < u)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((u / 10) + 48);
				putchar((u % 10) + 48);
				if (i != 98 || u != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}

