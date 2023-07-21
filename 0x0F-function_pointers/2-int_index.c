#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: Pointer to the integer array to search.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: The index of the first element for which cmp function does not return 0.
 *         -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}

