#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str[i] != ''; ++i)
		res = res * 10 + str[i] - '0';
	return (sign * res);
}
