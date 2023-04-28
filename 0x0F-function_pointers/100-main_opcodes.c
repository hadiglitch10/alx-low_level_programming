#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints own opcodes machine lang
 * @argc: counter argument
 * @argv: pointer argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int numb, j;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n"), exit(1);
	}

	numb = atoi(argv[1]);

	if (numb < 0)
	{
		printf("Error\n"), exit(2);
	}

	for (j = 0; j < numb; j++)
	{
		if (j == numb - 1)
		{
			printf("%02hhx\n", ptr[j]);
			break;
		}
		printf("%02hhx ", ptr[j]);
	}
	return (0);
}
