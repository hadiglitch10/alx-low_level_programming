#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to change the first letter of a word in uppercase
 *
 * Return: capitalizes letters
*/

char *cap_string(char *str)
{
	int length = strlen(str), i;

	for (i = 0; i < length ; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
