#include "lists.h"

/**
 * sum_listint - returns sum of all the data of a linked list
 *
 * @head: pointer to the first element in a linked list
 *
 * Return: sum of the data in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node;
	int sum = 0;

	if (head == NULL)
		return (0);

	current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}

