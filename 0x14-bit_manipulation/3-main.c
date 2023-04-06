#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to set the bit of
 * @index: the index of the bit to set
 */
void set_bit(unsigned long int *n, unsigned int index)
{
    *n |= (1 << index);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to set the bit of
 * @index: the index of the bit to set
 */
void set_bit(unsigned long int *n, unsigned int index)
{
    *n |= (1 << index);
}
