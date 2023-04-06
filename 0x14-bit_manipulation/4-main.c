#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int num;

    num = 1024;
    clear_bit(&num, 10);
    printf("%lu\n", num);

    num = 0;
    clear_bit(&num, 10);
    printf("%lu\n", num);

    num = 98;
    clear_bit(&num, 1);
    printf("%lu\n", num);

    return 0;
}
