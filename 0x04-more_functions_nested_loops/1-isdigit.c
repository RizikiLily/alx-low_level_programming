#include "main.h"

/**
 * _isdigit - evaluates whether a character is a digit
 * @c: character to be evaluated
 * Return: 1 for a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
