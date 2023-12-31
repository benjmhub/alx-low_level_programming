#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb); // Expected output: 98

    nb = _atoi("-402");
    printf("%d\n", nb); // Expected output: -402

    nb = _atoi(" ------++++++-----+++++--98");
    printf("%d\n", nb); // Expected output: -98

    nb = _atoi("214748364");
    printf("%d\n", nb); // Expected output: 214748364

    nb = _atoi("0");
    printf("%d\n", nb); // Expected output: 0

    nb = _atoi("Suite 402");
    printf("%d\n", nb); // Expected output: 402

    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb); // Expected output: -98

    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb); // Expected output: 402

    nb = _atoi("+++++ +-+ 2242454");
    printf("%d\n", nb); // Expected output: 2242454

    nb = _atoi("-2147483648");
    printf("%d\n", nb); // Expected output: -2147483648

    return (0);
}

