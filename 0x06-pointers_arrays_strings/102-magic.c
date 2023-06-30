#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	int *p = a + 2;

	p[-1] = 98; /* Added line */

	/* Print array elements */
	printf("a[2] = %d\n", a[2]);

	return (0);
}

