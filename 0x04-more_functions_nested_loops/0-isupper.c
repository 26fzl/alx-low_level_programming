#include "main.h"
/**
 *_isupper - check if c is upper
 * @c: the number to be checked
 * Return: 1 if it is uppercase or 0 if not
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
