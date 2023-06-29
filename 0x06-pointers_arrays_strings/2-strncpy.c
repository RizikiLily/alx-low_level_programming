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
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

