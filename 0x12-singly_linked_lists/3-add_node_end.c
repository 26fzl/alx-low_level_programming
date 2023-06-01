#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end of a linked list
 * @head: double pointer
 * @str: string
 * Return: address of the new element, or NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *curr;
	size_t x;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);

	for (x = 0; str[x]; x++)
		;

	new->len = x;
	new->next = NULL;
	curr = *head;

	if (curr == NULL)
	{
		*head = new;
	}
	else
	{
		for (; curr->next != NULL; curr = curr->next)
			;
		curr->next = new;
	}
	return (*head);
}
