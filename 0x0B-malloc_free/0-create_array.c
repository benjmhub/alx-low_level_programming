#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: If size is 0 or if memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the allocated and initialized array.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

