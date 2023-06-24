#include <stdio.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success, returns the character written.
 * On error, returns EOF.
 */

int _putchar(char c)
{
	return (putchar(c));
}

/**
 * main - Causes an infinite loop
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		_putchar(i);
		/*
		 * Commenting out the line that increments i
		 * to prevent the infinite loop
		 */
		/* i++; */
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

