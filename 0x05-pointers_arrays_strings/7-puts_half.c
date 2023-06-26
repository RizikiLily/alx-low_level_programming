#include "main.h"

/** puts_half - prints secind half of the string
 * @str: strinf to be manipulated
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = 0;
	int i;

	while ((*str)++ != '\0')
		len++;
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
	
