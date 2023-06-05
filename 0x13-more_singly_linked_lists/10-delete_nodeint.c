#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the node at a given index
 * @head: pointer
 * @index: The index of the node to delete
 *
 * Return: if success 1 otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *tem = *head;
	unsigned int x;

	if (tem == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	for (x = 0; x < (index - 1); x++)
	{
		if (tem->next == NULL)
			return (-1);

		tem = tem->next;
	}

	tem = tem->next;
	tem->next = cur->next;
	free(cur);
	return (1);
}
