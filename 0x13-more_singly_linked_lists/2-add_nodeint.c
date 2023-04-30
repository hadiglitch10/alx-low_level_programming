#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to the first node
 * @n: data insert in new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t = *new_node;

	new_node = malloc(sizeof(listint_int));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
