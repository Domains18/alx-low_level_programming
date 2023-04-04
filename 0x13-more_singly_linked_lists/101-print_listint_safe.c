#include "lists.h"
/**

safelyPrintListInt - prints a linked list, safely

@head: list of type listint_t to print

Return: number of nodes in the list
*/
size_t safelyPrintListInt(const listint_t * head) {
  size_t numNodes = 0;
  long int diff;

  while (head) {
    // calculate the difference between the current node and the next node
    diff = head - head -> next;
    // increment the number of nodes and print the current node's information
    numNodes++;
    printf("[%p] %d\n", (void * ) head, head -> n);

    // if the difference is positive, move to the next node
    if (diff > 0)
      head = head -> next;
    // if the difference is negative, the next node has already been printed, so print the information and exit the loop
    else {
      printf("-> [%p] %d\n", (void * ) head -> next, head -> next -> n);
      break;
    }
  }

  return numNodes;
}
