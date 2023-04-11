#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1 != '\0')
	{
		i++;
	}
	while (s2 != '\0')
	{
		j++;
	}
	n = malloc(sizeof(char) * (i + j + 1));

	if (n == NULL)
	{
		return (NULL);
	}

		i = j = 0;
	while (s1[i] != '\0')
	{
		n[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		n[i] = s2[j];
		i++, j++;
	}
	n[i] = '\0';
	return (n);
}
