#include "function_pointers.h"

/**
 * int_index - Returns the index of the first element that matches the comparison.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a function that compares integers.
 * Return: The index of the first matching element, or -1 if no match is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
