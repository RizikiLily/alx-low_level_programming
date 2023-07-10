#include "main.h"
#include <stdlib.h>

/**
 * argstostr - joins arguments
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer or null
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int n = 0;
	int m = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			n++;
	}
	n += ac;
	str = malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[m] = av[i][j];
			m++;
		}
		if (str[m] == '\0')
		{
			str[m++] = '\n';
		}
	}
	return (str);
}
