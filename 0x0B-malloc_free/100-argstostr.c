#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: array of pointers to arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int arg, chr, length = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (chr = 0; av[arg][chr]; chr++)
			length++;
		length++;
	}

	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (chr = 0; av[arg][chr]; chr++)
		{
			str[index] = av[arg][chr];
			index++;
		}
		str[index] = '\n';
		index++;
	}
	str[index] = '\0';
	return (str);
}

