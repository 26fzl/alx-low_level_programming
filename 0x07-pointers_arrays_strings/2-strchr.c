#include "main.h"
#include <stdio.h>
/**
 * _strchr - locate a character in a string.
 * @c: character
 * @s: string
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + i);
	}
	return (NULL);
}
