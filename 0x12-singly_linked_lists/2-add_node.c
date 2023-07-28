#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the pointer of the head (first element) of the list.
 * @str: The data (string) to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	size_t str_len;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	str_len = 0;
	while (str[str_len])
		str_len++;

	new_node->str = dup_str;
	new_node->len = str_len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

