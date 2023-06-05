#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: pointer
 *
 * Return: if the list is empty 0 otherwise
 * the head head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *cur;
	int num_nod;

	if (!head || !*head)
		return (0);

	num_nod = (*head)->n;
	cur = (*head)->next;
	free(*head);
	*head = cur;

	return (num_nod);
}

