#include "lists.h"

#include <stdio.h>

/**
 * print_listint_safe - prints a linked list safely, avoiding infinite loops
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t * head) {
  size_t node_count = 0;
  long int diff;

  while (head) {
    diff = head - head -> next; // difference between current and next node
    node_count++;
    printf("[%p] %d\n", (void * ) head, head -> n);

    if (diff > 0)
      head = head -> next;

    else {
      printf("-> [%p] %d\n", (void * ) head -> next, head -> next -> n);
      break;
    }
  }

  return (node_count);
}
