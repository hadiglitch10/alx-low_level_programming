#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - Add a new node at the end of a list
 * @head: Address of the first node of a list
 * @str: Address of the string to insert into the new node
 * Return: Address of the new node
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (!(*head) || !new_end || !temp)
	{
		return (NULL);
	}
	if (str)
	{
		new_end->str = strdup(str);
		if (!new_end->str)
		{
			free(new_end);
			return (NULL);
		}
		new_end->len = _strlen(new_end->str);
	}
	else
	{
		return (NULL);
	}
	if (temp)
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_end;
	}
	else
	{
		*head = new_end;
	}
	return (new_end);
}
