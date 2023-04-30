
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *mouse;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		mouse = (*head)->next;
		free(*head);
		*head = mouse;
	}
	*head = NULL;
}
