#include "main.h"

/**
 * _strcpy - copies a string fom source to destination
 * @src: where the string is copied from
 * @dest: where the string is copied to
 * Return: the pointer to set
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
