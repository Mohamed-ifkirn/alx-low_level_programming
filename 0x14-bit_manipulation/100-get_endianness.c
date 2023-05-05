#include "main.h"

/**
 * get_endianness - checks the end of the code
 * @new:
 * @more:
 * Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int new = 1;

	char *more = (char *)&new;

	if (*more)
{
	return (1);
}
	return (0);
}
