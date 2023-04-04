#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: pointer to the first element in the list
 * @index: the index of the node to be returned
 *
 * Return: pointer to the nth node, NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int current_index = 0;

	current_node = head;

	while (current_index != index)
	{
		if (current_node == NULL)
			return (NULL);

		current_node = current_node->next;
		current_index++;
	}

	if (current_node == NULL)
		return (NULL);

	return (current_node);
}

