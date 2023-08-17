#include "lists.h"

/**
 * print_dlistint - print elemts of list
 *
 * @h: p
 * Return: numof el in list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_el = 0;
	const dlistint_t *tmp = h;

	if (!tmp)
	{
		return (0);
	}

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		num_el++;

	}
	return (num_el);
}
