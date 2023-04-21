#include <stdio.h>
/**
 *main - Entry
 *Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 35);
	}
	putchar('\n');
	return (0);
}
