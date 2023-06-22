#include "main.h"

/**
 * more_numbers - prints numbrs 10x
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int n = 0;

	while (n <= 10)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		n++;
		_putchar(' ');
	}
}

