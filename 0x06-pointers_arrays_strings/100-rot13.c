#include "main.h"

/**
 * rot13 - encoder rot13
 * @str: pointer to string parameters
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i;
	int j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefjhijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
		}
	}
	return (str);
}

