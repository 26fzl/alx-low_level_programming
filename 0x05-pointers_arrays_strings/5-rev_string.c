#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the input string
 * Return: nothing
 */
void rev_string(char *s)
{
	int l = 0, i = 0;
	char tmp;

	while (s[i++])
	l++;
	for (i = l; i >= l / 2; i--)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}
