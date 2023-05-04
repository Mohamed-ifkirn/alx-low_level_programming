#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
  * @b: binary number
  * Return: the converted number or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int more;
	if (!b)
	return (0);

	for (more = 0; *b; b++)
{
	if (*b == '1')
	more = (more << 1) | 1;
	else if (*b == '0')
	more <<= 1 | 1;
	else
	return (0);
}
	return (more);
}