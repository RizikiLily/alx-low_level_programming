#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: character to be printed in reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c = c - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
