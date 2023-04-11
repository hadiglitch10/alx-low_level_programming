#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *m;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	m = malloc(sizeof(char) * (len + 1));

	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		m[i] = str[i];
	}
	m[len] = '\0';
	return (m);
}
