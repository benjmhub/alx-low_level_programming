#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The input string.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *ptr = s;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (s == NULL)
		return (NULL);

	while (*ptr != '\0')
	{
		int i = 0;
		int found = 0;

		while (alphabet[i] != '\0')
		{
			if (*ptr == alphabet[i])
			{
				*ptr = rot13[i];
				found = 1;
				break;
			}
			i++;
		}

		if (found)
			ptr++;
		else
			ptr++;
	}

	return (s);
}

