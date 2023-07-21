/*
 * File: 9-print_comb.c
 * Authored by: Your Name
 * Date: July 21, 2023
 * Description: Prints all possible combinations of single-digit numbers,
 *              separated by ", " in ascending order using putchar.
 */

#include <stdio.h>

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}


