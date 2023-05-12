#include "main.h"
/**
 * *_strcpy - copie the string pointed to by src
 * to the buffer pointed to by dest
 * including the terminating null byte (\0)
 * @dest: destination
 * @src: source
 * Return: pointed to dest
 */
char *_strcpy(char *dest, char *src)
{
	int f = 0;

	for (f = 0; src[f] != '\0'; f++)
	{
		dest[f] = src[f];
	}
	dest[f] = '\0';
	return (dest);
}
