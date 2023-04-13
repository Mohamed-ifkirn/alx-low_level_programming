#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @A1: first char
 * @A2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *A1, char *A2, unsigned int n)
{
	unsigned int x, y, z;
	char *A;

	if (A1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; A1[x]; ++x)
		;
	}
	if (A2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; A2[y]; ++y)
		;
	}
	if (y > n)
		y = n;
	A = malloc(sizeof(char) * (x + y + 1));
	if (A == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		A[z] = A1[z];
	for (z = 0; z < y; z++)
		A[z + x] = A2[z];
	A[x + y] = '\0';
	return (A);
}
