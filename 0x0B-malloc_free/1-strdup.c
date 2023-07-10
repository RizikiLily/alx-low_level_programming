#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns pointer to a new memory with duplicate string
 * @str: char to be duplicated
 * Return: null or pointer
 */

char *_strdup(char *str)
{
	char *dest;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
		dest[j] = str[j];
	}
	return (dest);
}
