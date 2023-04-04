#include "lists.h"
/**
 * add_nodeint - adds  a new node ta the beginnning of
 *  a list listint_t
 *
 *  @head: a ptr to a ptr to 1st elem in the list
 *  @n: the data to be added to the 1st node
 *
 *  Return: ptr to new element , NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	/* create new node*/
	new->n = n;
	new->next = *head;

	/* make head point to the new node*/
	*head = new;

	return (new);
}

