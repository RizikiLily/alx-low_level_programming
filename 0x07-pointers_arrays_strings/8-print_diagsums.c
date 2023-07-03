#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: array
 * @size: size of array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i * size + j];
			}
			if (i == size - 1 - j)
			{
				sum2 = sum2 + a[i * size + j];
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
