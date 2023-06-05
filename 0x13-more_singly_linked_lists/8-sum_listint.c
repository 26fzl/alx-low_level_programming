#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data
 * @head: pointer
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

