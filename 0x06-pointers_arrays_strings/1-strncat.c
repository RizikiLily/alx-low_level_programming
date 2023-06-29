#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: destination of characters
 * @src: source of characters to be joined
 * @n: number of characters to be added
 * Return: a pointer to the reuslting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (start);
}

