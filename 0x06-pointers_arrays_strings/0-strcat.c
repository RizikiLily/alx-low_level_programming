#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: strings appended to dest
 * @src: source of strings to be appended
 * Return: detsination pointer
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
