#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints all single-digit numbers of base 10
 * starting from 0, followed by a new line.
 * It only uses the putchar function and adheres to the given restrictions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i; /* Declare the loop variable */

	for (i = 48; i <= 57; i++) /* Loop from '0' to '9' in ASCII representation */
	{
		putchar(i); /* Print each digit using putchar */
	}

	putchar('\n'); /* Print a new line after the loop */

	return (0); /* Return 0 to indicate successful execution */
}

