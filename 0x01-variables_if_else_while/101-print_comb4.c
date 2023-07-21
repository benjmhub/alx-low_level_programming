#include <stdio.h>

/**
 * print_three_digit_number - Prints a three-digit number using only putchar.
 * @num: The three-digit number to be printed.
 */
void print_three_digit_number(int num)
{
	putchar((num / 100) + '0');
	putchar(((num / 10) % 10) + '0');
	putchar((num % 10) + '0');
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				print_three_digit_number(i);
				putchar(',');
				putchar(' ');
				print_three_digit_number(j);
				putchar(',');
				putchar(' ');
				print_three_digit_number(k);
				if (i != 7 || j != 8 || k != 9) /* Avoid trailing comma and space */
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

