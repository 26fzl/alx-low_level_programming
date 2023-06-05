#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: pointer
 * @n: data to insert in that new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nod;

	new_nod = malloc(sizeof(listint_t));
	if (new_nod != NULL)
	{
		new_nod->n = n;
		new_nod->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
	       new_nod->next = *head;
	*head = new_nod;
	return (new_nod);
}
