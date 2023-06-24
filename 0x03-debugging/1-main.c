#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int _putchar(char c)
{
        return putchar(c);
}

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                _putchar(i);
                /* Commenting out the line that increments i
                   to prevent the infinite loop */
                /* i++; */
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}

