
#include "lists.h"

/**
 * listint_len - returns number of elements
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
