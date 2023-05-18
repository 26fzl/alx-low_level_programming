#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated
 * @old_size: the size of the allocated space for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *p;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if ((new_size == 0) && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		p = malloc(new_size);
		if (p == NULL)
			return (p);
		for (x = 0; x < old_size; x++)
			p[x] = *((char *)ptr + 1);
		free(ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	}
	return (p);
}
