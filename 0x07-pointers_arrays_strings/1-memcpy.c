#include "main.h"

/**
* _memcpy - function to copy @n bytes from memory region @src
* Enter storage area @dest
*
* @n: function to copy
*
* @src: bytes from the memory area
*
* @dest: to store
*
* Returns: pointer to @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}

return (dest);
}
