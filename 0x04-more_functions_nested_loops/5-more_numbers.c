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
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar(i + '0');
			}
		}
		n++;
		_putchar('\n');
	}
}

