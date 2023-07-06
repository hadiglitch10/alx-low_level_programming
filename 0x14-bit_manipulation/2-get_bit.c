#include "main.h"

/**
* get_bit - returns the value of a bit at an index in a decimal number
* @n: num
* @index: position of the bit
*
* Return: the bit or (-1) if there is an error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
