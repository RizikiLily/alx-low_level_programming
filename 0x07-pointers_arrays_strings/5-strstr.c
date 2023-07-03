#include "main.h"

/**
 * _strstr - locatess substring
 * @haystack: string to be searched into
 * @needle: string to search
 * Return:  a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *t = needle;

		while (*s == *t && *t != '\0')
		{
			s++;
			t++;
		}
		if (*t == '\0')
			return (haystack);
	}
	return (0);
}
