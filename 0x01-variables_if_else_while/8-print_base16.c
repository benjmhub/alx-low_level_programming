#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 *              followed by a new line. It uses the putchar function and
 *              limits its usage to three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char hex_digits[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hex_digits[i]);
	}
	putchar('\n');

	return (0);
}

