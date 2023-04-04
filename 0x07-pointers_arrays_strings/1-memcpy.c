#include "main.h"
/**
 *_memcpy - a function that copies memory
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes copy
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int start;

	for (start = 0; start < n; start++)
	{
		dest[start] = src[start];
	}
	return (dest);
}
