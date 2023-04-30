#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a new code at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new
 *
 * Return: the address of new 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int s;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}
	current = *head;
	for (s = 0; current != NULL && s < idx - 1; s++)
	{
	current = current->next;
	}	
	if (current == NULL || current->next == NULL)
	{
	free(new);
	return (NULL);
	}
	new->next = current->next;
	current->next = new;

	return (new);
}
