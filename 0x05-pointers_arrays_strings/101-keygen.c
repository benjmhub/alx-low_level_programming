#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Generates a random password
 *
 * Return: Always 0
 */
int main(void)
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];
	int i, ascii_val;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		do {
			ascii_val = rand() % 128;
		} while (!((ascii_val >= '0' && ascii_val <= '9') ||
				   (ascii_val >= 'A' && ascii_val <= 'Z') ||
				   (ascii_val >= 'a' && ascii_val <= 'z')));

		password[i] = (char)ascii_val;
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}

