#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all elements of a listint_t list
 *
 * @h: ptr to 1st elemnt in the list(head)
 *
 * Return: elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}   
