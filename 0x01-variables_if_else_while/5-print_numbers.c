#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints all single-digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	/* Loop through the numbers 0 to 9 */
	for (i = 0; i <= 9; i++)
	{
		/* Print the current number */
		printf("%d", i);
	}

	/* Print a new line after the loop is done */
	printf("\n");
	return (0);
}

