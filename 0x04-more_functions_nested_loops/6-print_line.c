#include "main.h"

/**
 * print_line - prints line
 * @n: number of times to print _
 * Return: nothing
 */

void print_line(int n)
{
	n = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar(' ');
	}
}

