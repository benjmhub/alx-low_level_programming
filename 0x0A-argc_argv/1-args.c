#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed (including the program name)
 * @argv: An array of pointers to the strings of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* Print the number of arguments (excluding the program name itself) */
	printf("%d\n", argc - 1);

	/* To suppress the unused parameter warning for argv */
	(void)argv;

	return (0);
}

