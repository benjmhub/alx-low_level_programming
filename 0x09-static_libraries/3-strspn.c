#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The input string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: The number of bytes in the initial segment of @s
 *         that consists only of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s != '\0')
	{
		found = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}

		if (found == 0)
			break;

		s++;
	}

	return (count);
}

