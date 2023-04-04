#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a linked list, safely
 * @head: Pointer to the list of type listint_t to print
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num_nodes++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num_nodes);
}
