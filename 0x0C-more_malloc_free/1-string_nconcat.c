#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to concatenate
 * Return: pointer to the concatenated  string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *stg;
	unsigned int u = 0, v = 0, w = 0, x = 0;

	while (s1 && s1[w])
		w++;
	while (s2 && s2[x])
		x++;

	if (n < x)
		stg = malloc(sizeof(char) * (w + n + 1));
	else
		stg = malloc(sizeof(char) * (w + x + 1));

	if (!stg)
		return (NULL);

	while (u < w)
	{
		stg[u] = s1[u];
		u++;
	}

	while (n < x && u < (w + n))
		stg[u++] = s2[v++];

	while (n >= x && u < (w + x))
		stg[u++] = s2[v++];

	stg[u] = '\0';

	return (stg);
}

