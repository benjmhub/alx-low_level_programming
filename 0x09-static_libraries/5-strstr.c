#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *find = needle;

		while (*haystack != '\0' && *find != '\0' && *haystack == *find)
		{
			haystack++;
			find++;
		}

		if (*find == '\0')
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}

