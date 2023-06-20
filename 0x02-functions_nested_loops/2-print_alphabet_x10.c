#include "main.h"

/**
 * print_alphabet_x10 -  prints letters 10x
 * Return: void
 */

void print_alphabet_x10(void)
{
	int c = 0;
	char i;

	while (c <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		c++;
	}
}
