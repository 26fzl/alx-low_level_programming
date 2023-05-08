#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: initial segment
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, n, v, check;

	v = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[x])
			{
				v++;
				check = 1;
			}
		}
		if (check == 0)
		{
			return (v);
		}
	}
	return (v);
}
