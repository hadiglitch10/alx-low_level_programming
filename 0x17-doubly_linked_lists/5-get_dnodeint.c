#include "lists.h"

/**
 * get_dnodeint_at_index - gets nth node of a doubly linked list
 * @head: pointer
 * @index: index of the node
 *
 * Return: address of the node, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; head && i < index; i++)
	{
		head = head->next;
	}

	return (head ? head : NULL);
}
