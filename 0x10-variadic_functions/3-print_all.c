#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char.
 * @arg: The char to be printed.
 */
void print_char(va_list arg)
{
    printf("%c", va_arg(arg, int));
}

/**
 * print_int - Prints an integer.
 * @arg: The integer to be printed.
 */
void print_int(va_list arg)
{
    printf("%d", va_arg(arg, int));
}

/**
 * print_float - Prints a float.
 * @arg: The float to be printed.
 */
void print_float(va_list arg)
{
    printf("%f", va_arg(arg, double));
}

/**
 * print_string - Prints a string.
 * @arg: The string to be printed.
 */
void print_string(va_list arg)
{
    char *s = va_arg(arg, char *);
    if (s == NULL)
        printf("(nil)");
    else
        printf("%s", s);
}

/**
 * print_all - Prints arguments based on the provided format.
 * @format: A list of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char* (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
    va_list args;
    const char *fmt_ptr = format;
    int is_first_arg = 1;

    va_start(args, format);

    while (*fmt_ptr)
    {
        if (is_first_arg == 0)
            printf(", ");

        switch (*fmt_ptr)
        {
            case 'c':
                print_char(args);
                break;
            case 'i':
                print_int(args);
                break;
            case 'f':
                print_float(args);
                break;
            case 's':
                print_string(args);
                break;
        }

        is_first_arg = 0;
        fmt_ptr++;
    }

    printf("\n");
    va_end(args);
}

