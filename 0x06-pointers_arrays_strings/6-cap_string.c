#include "main.h"

/**
 * cap_string - converts strings to uppercase
 * @str: strind to be converted
 * Return: Converted string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}') && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] + 'A' - 'a';
	}
	return (str);
}
