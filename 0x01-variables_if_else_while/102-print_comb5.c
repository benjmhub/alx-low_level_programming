#include <stdio.h>

/* Function to print a two-digit number */
void print_number(int num)
{
	putchar((num / 10) + '0');
	putchar((num % 10) + '0');
}

/* Main function to print all possible combinations of two two-digit numbers */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			/* Print the numbers with two digits */
			print_number(num1);
			putchar(' ');
			print_number(num2);

			/* Check if we are not at the last combination */
			if (num1 != 98 || num2 != 99)
			{
				/* Print comma and space */
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

