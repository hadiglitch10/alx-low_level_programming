#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list_t list.
 * @str: The string to be duplicated and added to the list_t list.
 *
 * Return: If successful - a pointer to the new node.
 *         Otherwise - NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (!head || !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	return (new_node);
}

