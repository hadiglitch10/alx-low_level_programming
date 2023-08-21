#include "main.h"
/**
 *_memset - fill a block of memory with a new value
 *@s: starting address of memory to be filled
 *@b: the new value
 *@n: number of bytes to change
 *
 *Return: changed array with new value with  n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int it;

	for (it = 0; n > 0; it++, n--)
	{
		s[it] = b;
	}
	return (s);
}
