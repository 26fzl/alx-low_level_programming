#include "lists.h"

/**
 * print_listint - print the elements of a linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nod++;
		h = h->next;
	}

	return (nod);
}

