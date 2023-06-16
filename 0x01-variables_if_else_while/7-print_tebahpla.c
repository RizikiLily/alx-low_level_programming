#include <time.h>
#include <stdio.h>

/**
 * main - prints out the last digit of a number
 * Return: 0(success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
