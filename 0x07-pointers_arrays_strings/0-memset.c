#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed by s
 * @s: pointer to a block of memory to fill
 * @b: value to be set
 * @n: number of bytes to be set to the value
 * Return: pointer to meory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
