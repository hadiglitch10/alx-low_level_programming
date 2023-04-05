#include "main.h"
/**
 * _puts_recursion - function puts a string;
 * @s: input string
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_putchar_recrusion(s + 1);
	}
}
