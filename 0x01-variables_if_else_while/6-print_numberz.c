#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints single digit numbers
 * Return:0(success)
 */
int main(void)
{
	int i;

	for  (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
