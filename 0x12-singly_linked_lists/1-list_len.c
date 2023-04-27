#include "lists.h"
/**
 * list_len - Calculate the number of elements
 * @h: Pointer to a list
 * Return: Integer
 **/
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++
	}
	return (cnt);
}
