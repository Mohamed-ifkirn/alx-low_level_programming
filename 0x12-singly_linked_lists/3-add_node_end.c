#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head of list_t list
 * @str: string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
char *dup;
int len;
list_t *new_node, *last_node;

new_node = (list_t *) malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

dup = strdup(str);

if (dup == NULL)
{
free(new_node);
return (NULL);
}

len = strlen(dup);

new_node->str = dup;
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}
last_node->next = new_node;
}

return (*head);
}
