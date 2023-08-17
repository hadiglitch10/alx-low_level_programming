#include "lists.h"

/**
 * delete_dnodeint_at_index - delete specific node
 *
 * @head: p
 * @index: index
 *
 * Return: 1 on success -1 on fail
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (unsigned int i = 0; current && i < index; i++)
		current = current->next;

	if (!current)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
