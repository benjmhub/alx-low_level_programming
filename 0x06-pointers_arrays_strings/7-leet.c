#include <stdio.h>
#include <stdlib.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *result = str;
	char *leetChars = "aAeEoOtTlL";
	char *leetReplacements = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetChars[j] != '\0'; j++)
		{
			if (str[i] == leetChars[j])
			{
				result[i] = leetReplacements[j];
				break;
			}
		}
	}

	return (result);
}

