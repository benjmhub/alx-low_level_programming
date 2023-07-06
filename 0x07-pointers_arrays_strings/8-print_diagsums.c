#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i;
	int diag1_sum = 0;
	int diag2_sum = 0;

	/* Calculate the sum of the main diagonal (from top-left to bottom-right) */
	for (i = 0; i < size; i++) {
		diag1_sum += a[(size + 1) * i];
	}

	/* Calculate the sum of the secondary diagonal (from top-right to bottom-left) */
	for (i = 0; i < size; i++) {
		diag2_sum += a[(size - 1) * (i + 1)];
	}

	/* Print the sums */
	printf("%d, %d\n", diag1_sum, diag2_sum);
}

