#include "main.h"
/**
  * clear_bit - bit to 0 at a given index
  * @n: unsign-...
  * @index: to change to zero
  * Return: 1 if it worked or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear_bit_index = (index >= sizeof(unsigned long int) * 8);

	if (clear_bit_index)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
