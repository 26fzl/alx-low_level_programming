#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: string with the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ut = 0;
	int x, y;

	if (!b)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
		;
	for (x--, y = 1; x >= 0; x--, y *= 2)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		if (b[x] & 1)
		{
			ut += y;
		}
	}
	return (ut);
}
