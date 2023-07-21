#include <unistd.h>

/**
 * my_putchar - Prints a single character to the standard output
 * @c: The character to be printed
 *
 * Description: We'll use this function to print digits without using printf or puts.
 */
void my_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * print_combinations - Prints all possible different combinations of two digits
 *
 * Description: The two digits must be different, and numbers should be printed in ascending order.
 */
void print_combinations(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			my_putchar(i + '0');
			my_putchar(j + '0');

			if (i != 8 || j != 9)
			{
				my_putchar(',');
				my_putchar(' ');
			}
		}
	}
	my_putchar('\n');
}

int main(void)
{
	print_combinations();
	return (0);
}
 
