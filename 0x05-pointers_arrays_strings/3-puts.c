#include "main.h"

/**
 * _puts - print a string
 * @str: string to be printed out
 * Return: nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}