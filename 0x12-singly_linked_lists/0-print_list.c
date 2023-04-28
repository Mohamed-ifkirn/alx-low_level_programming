#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: The list_t list
 * Return: number of nodes in list as size_t
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; h = h->next, ++nodes)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	}

	return (nodes);
}