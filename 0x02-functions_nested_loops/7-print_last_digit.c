#include "main.h"

/**
 * print_last_digit - prints last digit
 * @c: Number whose last digit is to be printed
 * Return: last digit
 */

int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
