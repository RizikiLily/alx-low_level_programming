#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: character to be modified
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i == 0) || (i % 2 == 0))
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
