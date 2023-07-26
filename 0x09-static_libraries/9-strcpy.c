#include "main.h"

/**
 * _strcpy - Copies the string pointed to by @src, including the null byte,
 *           to the buffer pointed to by @dest.
 * @dest: The buffer to copy the string to.
 * @src: The string to be copied.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}

