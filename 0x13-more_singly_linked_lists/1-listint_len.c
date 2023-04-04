#include "lists.h"
/**
 * function to get the number of elements in a singly-linked-list
 * @h: head of the list
 * Return: no of elememnts
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_nodes = 0;
	while(h != NULL)
	{
		number_of_nodes++;
		h=h->next;
	}
	return (number_of_nodes);
}
