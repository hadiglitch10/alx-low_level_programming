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
{	/*before desired node*/
	dlistint_t *current = *head;
	/*after desired node*/
	dlistint_t *next_node = current->next->next;

	if (!head || !*head)
		return (-1);
	/*first node */
	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	/*get the desired node*/
	for (unsigned int i = 0; current && i < index - 1; i++)
		current = current->next;

	if (!current || !current->next)
		return (-1);


	free(current->next);
	/*point to the after*/
	current->next = next_node;

	/*point to the before*/
	if (next_node)
		next_node->prev = current;

	return (1);
}
