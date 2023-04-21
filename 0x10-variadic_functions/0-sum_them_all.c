#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all variadic functions param
 * @a: mandatory arg
 * Return: 0 if a == 0, sum if success
 */
int sum_them_all(const unsigned int a, ...)
{
	va_list args;
	unsigned int i, sum;

	if (a == 0)
		return (0);

	va_start(args, a);

	sum = 0;
	for (a = 0; i < a; i++)
		sum = sum + va_arg(args, unsigned int);

	va_end(args);

	return (sum);
}
