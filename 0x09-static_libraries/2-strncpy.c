#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input string
 * @src: input string
 * @n: input string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (src[x++])
		y++;
	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];
	for (x = y; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
