#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory malloc
 * @ptr: pointer to the memory allocated before
 * @old_size: size allocated for ptr
 * @new_size: new size of memo
 *
 * Return: pointer to the new memo
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *old_p;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_p = ptr;

	if (new_size < old_size)
	{
		for (n = 0; n < new_size; n++)
			p[n] = old_p[n];
	}

	if (new_size > old_size)
	{
		for (n = 0; n < old_size; n++)
			p[n] = old_p[n];
	}

	free(ptr);
	return (p);
}
