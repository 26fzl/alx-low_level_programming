#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 *@str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *h;
	int x = 0, i = 1;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	h = malloc((sizeof(char) * i) + 1);
	if (h == NULL)
		return (NULL);
	while (x < i)
	{
		h[x] = str[x];
		x++;
	}
	h[x] = '\0';
	return (h);
}
