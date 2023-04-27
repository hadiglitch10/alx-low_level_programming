#include "lists.h"
/**
 * list_len - Calculate the number of elements
 * @h: Pointer to a list
 * Return: Integer
 **/
size_t list_len(const list_t *h)
{
	size_t cnt = 0;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		cnt++;
	}
	return (cnt);
}
