#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');  /* Print the negative sign for negative numbers */
		n = -n;         /* Convert the number to positive */
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);  /* Recursively print the remaining digits */
	}

	_putchar('0' + (n % 10));  /* Print the current digit */
}

