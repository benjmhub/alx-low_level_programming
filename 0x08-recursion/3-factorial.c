/**
 * factorial - Calculates the factorial of a number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); /* Return -1 for negative numbers */

	if (n == 0)
		return (1); /* Base case: factorial of 0 is 1 */

	return (n * factorial(n - 1)); /* Recursive call */
}

