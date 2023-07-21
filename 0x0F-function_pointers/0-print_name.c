#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name in a specific format based on the given function pointer
 * @name: name of the person
 * @f: function pointer to the function that formats and prints the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name && f)
    {
        f(name);
    }
}

