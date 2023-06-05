#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nod;
	listint_t *cur = *head;

	new_nod = malloc(sizeof(listint_t));
	if (new_nod != NULL)
		return (NULL);

	new_nod->n = n;
	new_nod->next = NULL;

	if (*head == NULL)
	{
		*head = new_nod;
		return (new_nod);
	}

	while (cur->next != NULL)
		cur = cur->next;

	cur->next = new_nod;

	return (new_nod);
}
