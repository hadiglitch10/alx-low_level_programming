#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	else if (s2 ==  NULL)
		s2 = "";

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		ptr = malloc(size of(char) * (s1 + n + 1));
	else
		ptr = malloc(size of(char) * (s1 + len2 + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i]  = s1[i];
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++
	}
ptr[i] = '\0';
return (ptr);
}
