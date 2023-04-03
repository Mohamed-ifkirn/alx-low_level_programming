#include "main.h"
#include <unisted.h>

/**
 * _putchar - writes the character c to stdout 
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and error is set appropriately
 * */
	__putchar(char c)
		
		return (write(1, &c, 1));
