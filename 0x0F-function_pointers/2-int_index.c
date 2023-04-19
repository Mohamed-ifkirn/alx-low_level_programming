#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of array
 * @cmp: call back function
 * Return: -1 for success, 0 for no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == 0 || cmp == 0 || size <= 0)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
