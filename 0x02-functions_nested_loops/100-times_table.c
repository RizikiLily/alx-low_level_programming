#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: the size  of the multiplication table
 * Return: nothing
 */
void print_times_table(int n)
{
	int m;
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		if ((n <= 15) && (n >= 0))
		{
		for (j = 0; j <= n; j++)
		{
			m = i * j;
			if (m < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (m >= 10 && m < 100)
			{
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar((m / 100) + '0');
				_putchar(((m / 10) % 10) + '0');
				_putchar((m % 10) + '0');
			}

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		}
	}
}
