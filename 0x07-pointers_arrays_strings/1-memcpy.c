#include "main.h"
/**
 *_memcpy - copie memory area
 * @src: memory area giving
 * @n: number of bytes to be filled
 * @dest: memory area receiving
 * Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > x; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
