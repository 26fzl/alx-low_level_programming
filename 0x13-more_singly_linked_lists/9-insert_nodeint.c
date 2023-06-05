#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node in a linked list
 * @head: pointer
 * @idx: index
 * @n: data to insert
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *cur = *head;
	listint_t *new_nod;

	new_nod = malloc(sizeof(listint_t));

	if (!new_nod || !head)
		return (NULL);
	new_nod->n = n;
	new_nod->next = NULL;

	if (idx == 0)
	{
		new_nod->next = *head;
		*head = new_nod;
		return (new_nod);
	}

	for (x = 0; cur && x < idx; x++)
	{
		if (x == idx - 1)
	{
		new_nod->next = cur->next;
		cur->next = new_nod;
		return (new_nod);
	}
	else
		cur = cur->next;
	}
	return (NULL);
}
