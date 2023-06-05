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
	unsigned int x;
	listint_t *tem = *head;
	listint_t *cur = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	for (x = 0; x < index - 1; x++)
	{
		if (!tem || !(tem->next))
			return (-1);
		tem = tem->next;
	}

	cur = tem->next;
	tem->next = cur->next;
	free(cur);

	return (1);
}
