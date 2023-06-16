#include <time.h>
#include <stdio.h>

/**
 * main - prints out the last digit of a number
 * Return: 0(success)
 */
int main(void)
{
	int z;
	char i;

	for (z = '0'; z <= '9'; z++)
		putchar(z);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
