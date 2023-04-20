#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);


	for (i = 0; i < n; i++)
	{
		res = va_arg(args, int);
		printf("%d", res);

		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
