#include "main.h"

/**
 * print_alphabet - using _putchar function to print alphabet from a to z
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
