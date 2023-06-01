#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add
 * Return: the address of the new element, or NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t x;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (x = 0; str[x]; x++)
		;

	new->len = x;
	new->next = *head;
	*head = new;

	return (*head);
}
