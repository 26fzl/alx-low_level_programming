#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *cur;

	while (head != NULL)
	{
		cur = head->next;
		free(head);
		head = cur;
	}
}

