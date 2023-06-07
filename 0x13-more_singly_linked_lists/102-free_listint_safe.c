#include "lists.h"

/**
 * free_listint_safe - Free a linked list
 * @h: Pointer
 *
 * Return: Number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *cur, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	cur = *h;

	while (cur != NULL)
	{
		tmp = cur;
		cur = cur->next;

		if (tmp <= cur)
		{
			free(tmp);
			len++;
		}
		else
		{
			tmp->next = NULL;
			free(tmp);
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
