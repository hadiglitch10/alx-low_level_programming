#include "lists.h"

/**
 * print_listint - funtion print list elements
 *
 * @h:pointer
 *
 * Return:counter
*/
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
