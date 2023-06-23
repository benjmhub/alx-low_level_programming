#include <stdio.h>

/**
 * largestPrimeFactor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number
 */
long largestPrimeFactor(long n)
{
	long i;

	while (n % 2 == 0)
		n /= 2;

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
			n /= i;
	}

	if (n > 2)
		return (n);

	return (i - 2);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long largestFactor = largestPrimeFactor(number);

	printf("%ld\n", largestFactor);

	return (0);
}

