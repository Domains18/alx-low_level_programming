#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * @ac: Number of arguments passed
 * @av: Array of arguments passed
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t num_chars;

    if (ac != 2)
    {
        fprintf(stderr, "Usage: %s filename\n", av[0]);
        exit(EXIT_FAILURE);
    }

    num_chars = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", num_chars);

    num_chars = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", num_chars);

    return (EXIT_SUCCESS);
}
