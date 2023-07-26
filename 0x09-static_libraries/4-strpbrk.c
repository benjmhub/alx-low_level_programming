#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: The input string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: A pointer to the first occurrence in @s of any byte in @accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}

		s++;
	}

	return (NULL);
}

