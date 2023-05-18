#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocat memory
 * @b: size of memory
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);

	if (pntr == NULL)
		exit(98);

	return (pntr);
}

