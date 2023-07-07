#include "main.h"

/**
 * calculate_sqrt - Recursive helper function to find the square root.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of 'n', or -1 if it doesn't have one.
 */
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);

	return (calculate_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of 'n', or -1 if it doesn't have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (calculate_sqrt(n, 0));
}

