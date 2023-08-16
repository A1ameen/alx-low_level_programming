#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Prints each element of an array on a new line.
 * @array: The array to iterate over.
 * @size: The number of elements in the array.
 * @action: A pointer to a function that takes an int parameter.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
