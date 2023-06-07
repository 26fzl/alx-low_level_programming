#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: pointer
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t nod = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	do {
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				nod++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
			while (t != h)
			{
				nod++;
				t = t->next;
			}

			return (nod);
		}

		t = t->next;
		h = (h->next)->next;
	} while (hare);

	return (0);
}

/**
 * print_listint_safe - Print a list safely.
 * @head: pointer
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nod, index = 0;

	nod = looped_listint_len(head);

	if (nod == 0)
	{
		for (; head != NULL; nod++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nod; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nod);
}

