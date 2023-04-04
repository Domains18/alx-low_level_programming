#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list and sets the head to NULL
 *
 * @head: pointer to a pointer to the first element in a list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
	}

	*head = NULL;
}

