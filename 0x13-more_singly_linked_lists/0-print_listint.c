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
	unsigned int cnt;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++
	}
	return (cnt);
}
