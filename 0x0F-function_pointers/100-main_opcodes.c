#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes)
{
	if (num_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *main_address = (unsigned char *)print_opcodes;

	int i;

	printf("%02x", main_address[0]);
	for (i = 1; i < num_bytes; i++)
	{
		printf(" %02x", main_address[i]);
	}
	printf("\n");
}

