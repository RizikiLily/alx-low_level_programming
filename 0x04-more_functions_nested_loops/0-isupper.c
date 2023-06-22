#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - evalutes whether a character is uppercase or not
 * @c: character to be evaluated
 * Return: 1 if upppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
