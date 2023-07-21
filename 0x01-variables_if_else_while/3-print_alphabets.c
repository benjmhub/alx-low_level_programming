#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, and then in uppercase,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Print lowercase alphabet */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	/* Print uppercase alphabet */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	/* Print newline */
	putchar('\n');

	return (0);
}


