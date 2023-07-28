#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The input string to be duplicated.
 *
 * Return: A pointer to the duplicated string or NULL on failure.
 */
char *_strdup(char *str)
{
	int len = 0;
	char *duplicate;
	int i;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	while (str[len] != '\0')
		len++;

	/* Allocate memory for the duplicate string (+1 for the null terminator) */
	duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the contents of the input string to the duplicate */
	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}

