#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int base = 0;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		sign = 1 - 2 * (s[i++] == '-');
	}
	while (s[i] >= '0' && s[i] <= '9')
		if (base > INT_MAX / 10 || (base == INT_MAX / 10 && s[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
	base = 10 * base + (s[i++] - '0');
}
	return (sign * base);
}
