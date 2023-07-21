#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program.
 * Adds positive numbers passed as command-line arguments and prints the result.
 * If no number is passed, prints 0. If an argument contains non-digit symbols (excluding '-'),
 * prints "Error" and returns 1.
 *
 * @argc: The number of command-line arguments (including program name).
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 1 if an argument contains non-digit symbols.
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j = 0;
		while (arg[j])
		{
			if (!isdigit(arg[j]) && arg[j] != '-')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		num = atoi(arg);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
