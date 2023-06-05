#include "lists.h"

/**
 * free_listint2 - free linked list
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *cur;

	if (head == NULL)
		return;

	while (*head)
	{
		cur = (*head)->next;
		cur = *head;
		free(cur);
	}

	head = NULL;
}
