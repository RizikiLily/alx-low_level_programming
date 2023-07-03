#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character to be searched
 * @s: location where charcter c is returned
 * Return: pointer to s or NULL if c ins not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
