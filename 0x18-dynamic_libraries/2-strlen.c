#include "main.h"
/**
 *  _strlen - return the length of a string.
 * @s : string parameter to check
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		++length;
	return (length);
}
