#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point for the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	long sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
	char *endptr;
	long num = strtol(argv[i], &endptr, 10);

	if (*endptr != '\0' || endptr == argv[i])
	{
	printf("Error\n");
	return (1);
	}

	sum += num;
	}

	printf("%ld\n", sum);
	return (0);
}

