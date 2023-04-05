#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n, or -1
 *			if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	/* Base case */
	if (n < 0)
	return (-1);

	if (n == 0 || n == 1)
	return (n);

	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Helper function for _sqrt_recursion.
 * @n: The number to calculate the square root of.
 * @i: The current guess for the square root.
 *
 * Return: The square root of n, or -1
 *		if n does not have a natural square root.
*/
int sqrt_helper(int n, int i)
{
	/* Base case */
	if (i * i > n)
	return (-1);

	if (i * i == n)
	return (i);

	return (sqrt_helper(n, i + 1));
}
