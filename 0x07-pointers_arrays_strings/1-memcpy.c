#include "main.h"

/**
 * _memcpy - copiees n bytes from src to dest
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of bytes to copy
 * Return: Pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	retur (dest);
}

