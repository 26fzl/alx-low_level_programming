#include "main.h"
/**
 *_memset - fill the memory with a constant byte
 * @s: memory area to be filled
 * @n: number of bytes to be filled
 * @b: constant byte to be used for filling
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
	}
	return (s);
}
