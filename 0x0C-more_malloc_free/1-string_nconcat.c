#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - joins strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters
 * Return: pointer or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int m, p;
	int i = 0;
	unsigned int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
		s3 = malloc(sizeof(char) * (i + j));
	else
		s3 = malloc(sizeof(char) * (i + n));
	if (!s3)
		return (NULL);
	for (m = 0; s1[m] != '\0'; m++)
	{
		s3[m] = s1[m];
	}
	for (p = 0; s2[p] != '\0' && p < n; p++)
	{
		s3[m] = s2[p];
		m++;
	}
	s3[m] = '\0';
	return (s3);
}
