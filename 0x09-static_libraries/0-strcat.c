#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * Return: dest
**/

char *_strcat(char *dest, char *src)
{
	int destlen = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';

	return (dest);
}
