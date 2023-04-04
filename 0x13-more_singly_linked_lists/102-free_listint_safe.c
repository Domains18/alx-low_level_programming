#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely, avoiding infinite loops
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	int diff;
	listint_t *temp_node;

	// if the list is empty, return 0
	if (!h || !*h)
		return (0);

	// loop through the list
	while (*h)
	{
		diff = *h - (*h)->next;  // difference between current and next node

		// if the difference is positive, move to the next node and free the current node
		if (diff > 0)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
			node_count++;
		}
		// if the difference is zero or negative, it means we've reached a loop
		// so free the current node and break out of the loop
		else
		{
			free(*h);
			*h = NULL;
			node_count++;
			break;
		}
	}

	// set the head to NULL to prevent dangling pointers
	*h = NULL;

	return (node_count);
}

