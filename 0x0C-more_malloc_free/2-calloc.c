#include "main.h"

/**
 * _calloc - allocates memory for an array, initialized to 0
 * @nmemb: number of elements
 * @size: byte size of each element
 *
 * Return: void pointer to array space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		ptr[nmemb] = 0;
	return (ptr);
}
