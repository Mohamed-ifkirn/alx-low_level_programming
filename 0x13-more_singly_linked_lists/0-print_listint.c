#include <stdio.h>
#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
}

	return (count);
}
