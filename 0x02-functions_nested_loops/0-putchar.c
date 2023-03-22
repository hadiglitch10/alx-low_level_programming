#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	char str[] = "_putchar";

for (int ch = 0; ch < 8; ch++)
{
	_putchar(str[ch]);
}
	_putchar('\n');

	return (0);
}
