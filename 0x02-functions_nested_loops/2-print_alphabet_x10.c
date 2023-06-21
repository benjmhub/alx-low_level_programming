#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10times
 * Return : Void
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;
	i=0;
	while (i<10)
	{
	for (letter='0';letter<='z';letter++){_putchar(letter);}
	_putchar('\n');
		i++;
	}

	}

