#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int, number to be represented in binary
 */
void print_binary(unsigned long int n)
{
int j;
	if (n == 0)
	{
	_putchar('0');
	return;
	}

	for (j = (sizeof(unsigned long int) * 8) - 1; j >= 0; j--)
	{
	if ((n >> j) & 1)
	_putchar('1');
	else
	_putchar('0');
	}
}
