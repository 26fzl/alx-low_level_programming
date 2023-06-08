#include "main.h"

/**
 * get_endianness - checks endian
 *
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int x;
	char *c = (char *) &x;

	x = 1;

	return (*c);
}

