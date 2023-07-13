#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int len = 0;
	int *ptr;
	int i, j;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		len++;
	}
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; min < max; j++)
	{
		ptr[j] = min++;
	}
	return (ptr);
}


