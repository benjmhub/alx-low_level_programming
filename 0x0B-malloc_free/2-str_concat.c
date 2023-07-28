#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: Pointer to the concatenated string (must be freed) or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    int len1 = 0, len2 = 0, i, j;
    char *concat_str;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate the lengths of both strings */
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    /* Allocate memory for the concatenated string (+1 for null terminator) */
    concat_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (concat_str == NULL)
        return (NULL);

    /* Copy the first string into the new memory */
    for (i = 0; i < len1; i++)
        concat_str[i] = s1[i];

    /* Append the second string after the first one */
    for (j = 0; j < len2; j++)
        concat_str[i + j] = s2[j];

    /* Null-terminate the concatenated string */
    concat_str[i + j] = '\0';

    return (concat_str);
}

