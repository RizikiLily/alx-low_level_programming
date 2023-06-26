#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int n = 0;
	int min = 1;
	int sign = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
		min *= -1;
		}
	while (s[i] >= 48 && s[i] <= 57)
	{
	sign = 1;
	n = (n * 10) + (s[i] - '0');
	i++;
	}
	if (sign == 1)
	{
		break;
	}
	i++;
	}
	n *= min;
	return (n);
}
