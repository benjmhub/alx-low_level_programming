void print_rev(char *s)
{
    int length = 0;
    int i; // Move the variable declaration here

    /* Calculate the length of the string */

    while (s[length] != '\0')
        length++;

    /* Print the string in reverse */

    for (i = length - 1; i >= 0; i--)
        _putchar(s[i]);

    /* Print a new line */
    _putchar('\n');
}

