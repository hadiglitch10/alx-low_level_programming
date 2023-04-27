#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr->str);
		free(curr);
	}
}

