#include "main.h"

/**
 *  _strspn -  gets the length of a prefix substring
 *  @s: initial s egment of s
 *  @accept: spurce of bytes
 *  Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int n = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{

			if (s[i] == accept[j])
			{
				n++;
			}
		}
	}
	return (n);
}







