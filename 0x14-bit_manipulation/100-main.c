#include <stdio.h>
#include "main.h"

int get_endianness(void);

int main(void)
{
    int endianness = get_endianness();

    if (endianness == 0) {
        printf("Big Endian\n");
    } else {
        printf("Little Endian\n");
    }

    return 0;
}
