#include "lists.h"

/**

insert_nodeint_at_index - inserts a new node at a given position

@head: pointer to pointer of first node of list

@index: index of the list where the new node should be added

@data: data to be stored in new node

Return: address of the new node or NULL if it fails
*/
listint_t * insert_nodeint_at_index(listint_t ** head, unsigned int index, int data) {
  listint_t * new_node, * temp, * prev;
  unsigned int i;

  if (!head)
    return (NULL);

  new_node = malloc(sizeof(listint_t));
  if (!new_node)
    return (NULL);

  temp = * head;
  prev = NULL;

  for (i = 0; i < index && temp; i++) {
    prev = temp;
    temp = temp -> next;
  }

  if (i == index) {
    new_node -> n = data;
    new_node -> next = temp;
    if (prev)
      prev -> next = new_node;
    else
      *
      head = new_node;
  } else {
    free(new_node);
    return (NULL);
  }
  return (new_node);
}
