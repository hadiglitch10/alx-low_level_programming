
#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: number of bytes
 * Return: dest
**/

char *_strcat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
