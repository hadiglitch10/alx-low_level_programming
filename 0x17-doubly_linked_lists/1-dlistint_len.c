#include "lists.h"

/**
 * dlistint_len - print elemts of list
 *
 * @h: p
 * Return: numof el in list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_el = 0;
	const dlistint_t *tmp = h;

	if (!tmp)
	{
		return (0);
	}

	while (tmp != NULL)
	{
		num_el++;
		tmp = tmp->next;

	}
	return (num_el);
}
