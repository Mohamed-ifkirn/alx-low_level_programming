#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: pointer to separator b/w numbers
 * @b: numbers of variables
 */
void print_numbers(const char *separator, const unsigned int b, ...)
{
	int res;
	unsigned int i;
	va_list args;

	va_start(args,b);

	for (i = 0; i < b; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < b - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
