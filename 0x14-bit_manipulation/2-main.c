#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int bit;

    bit = get_bit(1024, 10);
    printf("%d\n", bit);

    bit = get_bit(98, 1);
    printf("%d\n", bit);

    bit = get_bit(1024, 0);
    printf("%d\n", bit);

    return 0;
}
