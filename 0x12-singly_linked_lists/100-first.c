#include <stdio.h>

/**
 * printBeforeMain - Constructor function that prints a message before main
 *
 * Return: void
 */
void __attribute__((constructor)) printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow, ");
	printf("I bore my house upon my back!\n");
}

