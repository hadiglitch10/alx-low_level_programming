
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int length, j;
	int *s;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	s = malloc(sizeof(int) * length);
	if (!s)
		return (NULL);
	for (j = 0; j < length; j++)
		s[j] = min++;
	return (s);
}
