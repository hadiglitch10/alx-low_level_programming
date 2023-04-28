#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 **/
int main(int argc, char *argv[])
{
	int cents, num_coins = 0;

	if (argc == 2)
	{
		cents = atoi(*(argv + 1));
	while (cents > 0)
	{
		if (cents % 25 < cents)
		{
			cents -= 25;
			num_coins++;
		}
		else if (cents % 10 < cents)
		{
			cents -= 10;
			num_coins++;
		}
		else if (cents % 5 < cents)
		{
			cents -= 5;
			num_coins++;
		}
		else if (cents % 2 < cents)
		{
			cents -= 2;
			num_coins++;
		}
		else if (cents % 1 < cents)
		{
			cents -= 1;
			num_coins++;
		}
	}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", num_coins);
	return (0); }

