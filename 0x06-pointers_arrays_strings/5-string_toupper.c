#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: string to change
 * Return: n
 */
char *string_toupper(char *n)
{
	int k = 0;

	while (n[k])
	{
		if (n[k] >= 'a' && n[k] <= 'z')
			n[k] -= 32;
		k++;
	}
	return (n);
}
