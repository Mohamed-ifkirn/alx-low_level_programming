#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to a pointer to the head of the list
 * @str: the string to be added to the new node
 *
 * Return: a pointer to the new node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	unsigned int i;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_str = malloc(sizeof(char) * (strlen(str) + 1));
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];
	new_str[i] = '\0';

	new_node->str = new_str;
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
