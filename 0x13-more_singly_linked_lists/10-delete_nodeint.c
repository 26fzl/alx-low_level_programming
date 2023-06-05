#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the node at a given index
 * @head: pointer
 * @index: The index of the node to delete
 *
 * Return: if success 1 if fail -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur = *head;
	listint_t *temp = NULL;
	unsigned int x;

	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	for (x = 0; cur && x < (index - 1); x++)
	{
		if (cur->next == NULL)
			return (-1);

		cur = cur->next;
	}

	temp = cur->next;
	cur->next = temp->next;
	free(temp);
	return (1);
}
