#include <stdio.h>

/**
 * main - prints out letters of the alphabet
 * Return: 0(success)
 */
int main(void)
{
	char alpha = 'a';
	char cap = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		++alpha;
	}
	while (cap <= 'Z')
	{
		putchar(cap);
		++cap;
	}
	putchar('\n');
	return (0);
}
