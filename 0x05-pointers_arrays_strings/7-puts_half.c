#include "main.h"

/**
 * puts_half - prints secind half of the string
 * @str: strinf to be manipulated
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i] != '\0')
		len++;
	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = len / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
