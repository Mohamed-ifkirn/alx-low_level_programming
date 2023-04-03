#include "main.h"

/**
* _memset - function fills the first @n bytes of the memory region pointed to
* via @s and constant bytes @b
*
* @n: The number of bytes in the memory area pointed to by @s
*
* @s: constant byte @b
*
* @b: memory area pointer
*
* Return: pointer to memory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}

return (s);
}
