#include "function_pointers.h"

/**
 * int_index - return index if the element is found
 * @array: elements to search from
 * @size: size of elements
 * @cmp: pointer to function
 * Return: integers
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
