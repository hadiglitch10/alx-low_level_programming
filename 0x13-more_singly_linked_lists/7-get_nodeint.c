#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first node
 * @index: index of the node to be returned
 *
 * Return: pointer to the nth node, or NULL if it does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	for (; temp && i < index; i++, temp = temp->next)
	{

	}
	return (temp ? temp : NULL);
}
