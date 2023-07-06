#include "main.h"

/**
 * binary_to_uint - converts a binary num to int
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

		if (!b)
		{
			return (0);
		}

	for (int i = 0; b[i] ; i++)
	{
		if (b != '0' | b != '1')
			return (0);
		num = num * 2 + (b[i] - '0');
	}
		return (num);
}
