#include "lists.h"

/**
 * get_nodeint_at_index - return the node at a certain index in a linked list
 * @head: pointer
 * @index: index of the node to return
 *
 * Return: pointer to the looked for node , or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind;

	for (ind = 0; ind < index; ind++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
