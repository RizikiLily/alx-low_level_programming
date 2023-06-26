#include "main.h"

/**
 * _strlen - retrusn the lenth of a string
 * @s: string to obtain its length
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
