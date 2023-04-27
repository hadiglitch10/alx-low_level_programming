#include <stdio.h>
#include "list.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list
 * Return: number of nodes printed
**/

size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("[%d] %s/n", h->str ? h->len, h->str : "(nil)");
		h = h->next;
		cnt++
	}
	return (cnt);
}
