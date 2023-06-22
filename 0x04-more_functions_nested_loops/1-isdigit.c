#include "main.h"

/**
 * _isdigit - Checks if a character is a digit
 * @x: The number  to be checked
 * Return: 1 for a character which will be a digit  or 0 for anything else
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);

else
return (0);
}

