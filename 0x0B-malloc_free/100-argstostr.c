#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all the arguments of your program.
 * @ac: input
 * @av: input
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int q, r, s, t;
	char *h;

	t = 0;
	s = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	q = 0;
	while (q < ac)
	{
		r = 0;
		while (av[q][r])
		{
			t++;
			r++;
		}
		t++;
		q++;
	}
	h = malloc((sizeof(char) * t) + 1);
	if (h == NULL)
		return (NULL);
	q = 0;
	while (q < ac)
	{
		r = 0;
		while (av[q][r])
		{
			h[s] = av[q][r];
			r++;
			s++;
		}
		h[s] = '\n';
		s++;
		q++;
	}
	h[s] = '\0';
	return (h);
}

