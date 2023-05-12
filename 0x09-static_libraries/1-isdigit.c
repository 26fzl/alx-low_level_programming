#include "main.h"
/**
 *_isdigit - check if c is digit between 0 and 9
 * @c: the number to be checked
 * Return: 1 if it is uppercase or 0 if not
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	return (1);
	else
	return (0);
}
