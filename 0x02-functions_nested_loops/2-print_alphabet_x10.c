#include "main.h"
/**
 *print_alphabet_x10 - prints x10 times the alphabet, in lowercase
 *return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	}
	_putchar('\n');
	i++;
	}
}
