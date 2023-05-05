#include "main.h"

/**
 * set_bit - given index.
 * @index: -...
 * @n: argument
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
int set_bit = (index >= sizeof(unsigned long int) * 8);
	if (set_bit)
		return (-1);
	*n |= (1 << index);
		return (1);
}
