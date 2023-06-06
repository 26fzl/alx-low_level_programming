#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *nex = NULL;

	while (*head)
	{
		nex = (*head)->nex;
		(*head)->nex = prv;
		prv = *head;
		*head = nex;
	}

	*head = prv;

	return (*head);
}
