#include "main.h"
#include <stdlib.h>

/**
 * free_2d_array - frees a 2D array
 * @arr: input 2D array to free
 * @height: height of the array
 */
void free_2d_array(char **arr, unsigned int height)
{
	if (arr != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(arr[height]);
		free(arr[height]);
		free(arr);
	}
}

/**
 * strtow - splits a string into words
 * @str: input string to split
 * Return: pointer to an array of strings, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	unsigned int c, height, i, j, start;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;

	words = malloc((height + 1) * sizeof(char *));
	if (words == NULL || height == 0)
	{
		free(words);
		return (NULL);
	}

	for (i = start = 0; i < height; i++)
	{
		for (c = start; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				start++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				words[i] = malloc((c - start + 2) * sizeof(char));
				if (words[i] == NULL)
				{
					free_2d_array(words, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; start <= c; start++, j++)
			words[i][j] = str[start];
		words[i][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}

