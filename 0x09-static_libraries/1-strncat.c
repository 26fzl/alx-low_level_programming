#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x++])
		y++;
	for (x = 0; src[x] && x < n; x++)
		dest[y++] = src[x];
	return (dest);
}
