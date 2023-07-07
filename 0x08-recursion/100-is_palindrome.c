#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int i, j;

	if (length <= 1)
		return (1);

	i = 0;
	j = length - 1;

	while (i < j)
	{
		if (s[i] != s[j])
			return (0);
		i++;
		j--;
	}

	return (1);
}
