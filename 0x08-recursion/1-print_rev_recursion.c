#include "main.h"
/**
 * _puts_recursion - function puts a rev string;
 * @s: input string
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s > '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
