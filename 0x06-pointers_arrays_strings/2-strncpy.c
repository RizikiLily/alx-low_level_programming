#include "main.h"

/**
 * _strncpy - copies string form soures into destination
 * @dest: where string is copied
 * @src: source of string
 * @n: number of strings to be copied
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
