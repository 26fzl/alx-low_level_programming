#include <stdio.h>
#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: input string
 * @needle: input substring
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			char *h = haystack;
			char *e = needle;

			while (*h == *e && *e != '\0')
			{
				h++;
				e++;
			}

		if (*e == '\0')
		{
			return (haystack);
		}
		}
	}
	return (NULL);
}
