#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *h;
	int a, b, c, d, f;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (s2[b] != '\0')
		b++;
	c = a + b;
	h = malloc((sizeof(char) * c) + 1);

	if (h == NULL)
		return (NULL);

	d = 0;
	while (d < a)
	{
		h[d] = s1[d];
		d++;
	}
	f = 0;
	while (d <= c)
	{
		h[d] = s2[f];
		d++;
		f++;
	}
	return (h);
}
