#include "main.h"

/**
 *print_diagonal - draws a diagonal lines on the terminal
 *@n: the number of time the character \ should be printed
 *
 *
 */

void print_diagonal(int n)

	int x, y;

{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == x)
					_putchar('\\');
				else if (y < x)
					_putchar('');
		}
		_putchar('\n');
		}
	}
}
