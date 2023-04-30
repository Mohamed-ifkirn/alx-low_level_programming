#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - ...
  * @head: ...
  * @index: ...
  *
  * Return: ...
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *new = *head, *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	{
	for (n = 0; n < index - 1; n++)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (-1);
		}

		temp = temp->next;
	}

	return (1);
}
