#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the head list_t list
 * @str: A string to be duplicated
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node = NULL;
    char *new_str = NULL;
    size_t str_len = 0;

    if (str == NULL)
        return NULL;

    str_len = strnlen(str, 1024);
    new_str = malloc(str_len + 1);

    if (new_str == NULL)
        return NULL;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        free(new_str);
        return NULL;
    }

    memcpy(new_str, str, str_len);
    new_str[str_len] = '\0';

    new_node->str = new_str;
    new_node->len = str_len;
    new_node->next = *head;

    *head = new_node;

    return new_node;
}
