#include <stdlib.h>
#include "main.h"

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 *word_len - represents the length
 * @str: The string
 * Return: The index marking the end of the initial word str.
*/
int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}
/**
 *count_words - Count number of words
 * @str: The string
 * *Return: The number of words contained within str.
*/
int count_words(char *str)
{
	int i = 0, wds = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')

		{
			wds++;
			i += word_len(str + i);
		}
	}
	return (wds);
}
/**
 * strtow - Split a string into words.
 * @str: The string
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **stg;
	int i = 0, wds, w, let, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	
	wds = count_words(str);
	
	if (wds == 0)
		return (NULL);
	
	stg = malloc(sizeof(char *) * (wds + 1));
	
	if (stg == NULL)
		return (NULL);
	for (w = 0; w < wds; w++)
	{
		while (str[i] == ' ')
			i++;

		let = word_len(str + i);
		stg[w] = malloc(sizeof(char) * (let + 1));

		if (stg[w] == NULL)
		{
			for (; w >= 0; w--)
				free(stg[w]);
			free(stg);
			return (NULL);
		}
		for (l = 0; l < let; l++)
			stg[w][l] = str[i++];

		stg[w][l] = '\0';
	}
	stg[w] = NULL;

	return (stg);
}
