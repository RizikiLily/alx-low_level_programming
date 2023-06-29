#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: destination of characters
 * @src: source of characters to be joined
 * Return: a pointer to the reuslting string
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
