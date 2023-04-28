#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 98 on failure.
 **/
int main(int argc, char *argv[])
{
	unsigned long mul;
	int arg_index, char_index;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (arg_index = 1; arg_index < argc; arg_index++)
	{
		for (char_index = 0; argv[arg_index][char_index] != '\0'; char_index++)
		{
			if (argv[arg_index][char_index] > 57 || argv[arg_index][char_index] < 48)
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);

	return (0);
}

