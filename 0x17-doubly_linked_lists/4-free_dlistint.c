#include "lists.h"

/**
 * free_dlistint - free
 *
 * @head: p
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (temp)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
