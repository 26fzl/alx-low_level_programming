#include "lists.h"

/**
 * listint_len - return number of elements in a linked lists
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		h = h->next;
	}

	return (nod);
}
