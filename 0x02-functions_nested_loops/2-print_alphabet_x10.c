#include "main.h"

/**
 * print_alphabet_x10 - function that will print alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int j;
	int i;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
