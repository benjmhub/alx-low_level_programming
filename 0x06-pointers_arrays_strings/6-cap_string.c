#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words in a string
 * @str: The input string
 *
 * Return: The modified string
 */
char *cap_string(char *str)
{
	int i, capitalize_next;

	capitalize_next = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			 str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			 str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			 str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			 str[i] == '}')
		{
			capitalize_next = 1;
		}
	}

	return (str);
}

