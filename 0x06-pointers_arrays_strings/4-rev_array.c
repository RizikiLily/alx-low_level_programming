#include "main.h"

/**
 * reverse_array - reverses elements in the array
 * @a: elements to be reversed
 * @n: number of elements to be reversed
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n -  1 - i] =  temp;
	}
}
