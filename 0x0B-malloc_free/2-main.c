#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Holberton ", "School");
    if (s == NULL)
    {
        printf("Memory allocation failed\n");
        return (EXIT_FAILURE);
    }
    printf("%s\n", s);
    free(s);

    s = str_concat("", "Hello");
    if (s == NULL)
    {
        printf("Memory allocation failed\n");
        return (EXIT_FAILURE);
    }
    printf("%s\n", s);
    free(s);

    s = str_concat("Hello", "");
    if (s == NULL)
    {
        printf("Memory allocation failed\n");
        return (EXIT_FAILURE);
    }
    printf("%s\n", s);
    free(s);

    s = str_concat("Hello", NULL);
    if (s == NULL)
    {
        printf("Memory allocation failed\n");
        return (EXIT_FAILURE);
    }
    printf("%s\n", s);
    free(s);

    s = str_concat(NULL, "Hello");
    if (s == NULL)
    {
        printf("Memory allocation failed\n");
        return (EXIT_FAILURE);
    }
    printf("%s\n", s);
    free(s);

    s = str_concat(NULL, NULL);
    if (s == NULL)
    {
        printf("Memory allocation failed\n");
        return (EXIT_FAILURE);
    }
    printf("%s\n", s);
    free(s);

    return (EXIT_SUCCESS);
}

