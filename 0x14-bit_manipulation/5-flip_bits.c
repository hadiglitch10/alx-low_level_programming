#include "main.h"

/**
 * flip_bits - Counts num bits to flip
 *
 * @n: The num1.
 * @m: The num2.
 *
 * Return: The number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits = bits + (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
