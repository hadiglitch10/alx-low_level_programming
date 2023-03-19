#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all alphabet in lowercase then uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a', uch = 'A';

	while (ch <= 'z' && uch <= 'Z')
	{
		putchar(ch);
		ch++;
		putchar(uch);
		uch++;
	}

	putchar('\n');

	return (0);
}
