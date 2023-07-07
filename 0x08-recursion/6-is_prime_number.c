/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if @n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Base cases */
	if (n <= 1)
		return (0); /* Not a prime number */
	if (n <= 3)
		return (1); /* 2 and 3 are prime numbers */

	/* Check if n is divisible by 2 or 3 */
	if (n % 2 == 0 || n % 3 == 0)
		return (0); /* Not a prime number */

	/* Check divisibility for numbers of the form 6k ± 1 */
	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0); /* Not a prime number */
	}

	return (1); /* Prime number */
}

