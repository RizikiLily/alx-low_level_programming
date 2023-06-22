#include "main.h"

/**
 * _isupper - evalutes whether a character is uppercase or not
 * @c: character to be evaluated
 * Return: 1 if upppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
