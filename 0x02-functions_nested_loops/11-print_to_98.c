#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: number to start printing from
 * Return: ...
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}

		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
