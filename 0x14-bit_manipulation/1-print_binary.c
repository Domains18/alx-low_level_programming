#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @num: The number to be printed in binary.
 */
void printBinary(unsigned long int num) 
{
	if (num > 1) 
	{
		printBinary(num >> 1);
	}

	_putchar((num & 1) + '0');
}
