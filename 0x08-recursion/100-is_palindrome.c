#include "main.h"

/**
 * is_palindrome - checks if a string is a palidrome
 * @s: string to be checked
 * Return: 1 if s is a palidnrome 0 otherwise
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = 0;
	int h;

	while (s[len] != '\0')
	{
		len++;
	}
	
	h = len - 1;
	while (h > i)
	{
		if (s[i] != s[h])
		{
			return (0);
		}
		i++;
		h--;
	}
	return (1);
}

