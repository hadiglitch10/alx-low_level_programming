#include "main.h"

/**
 * set_bit - set 0 to 1
 *
 * @n : num
 * @index : position
 *
 * Return: (1) if true (-1) if false
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
		return (1);
}
