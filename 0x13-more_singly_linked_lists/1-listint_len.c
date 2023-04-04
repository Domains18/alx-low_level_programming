#include "lists.h"

/**
 * listint_len -functuion to get the no of elements in a singly linked list
 *
 * @h: head of a singly linked list
 *
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

