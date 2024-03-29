#include "lists.h"

/**
 * add_dnodeint - add node in begin
 *
 * @head: dp
 * @n: value of new node
 *
 * Return: the new liosts
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (0);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
