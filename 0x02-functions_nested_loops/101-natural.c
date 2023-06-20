#include <stdio.h>

/**
 * main - prints sum of multiples of 3 and 5 below 1024
 * Return: 0(success)
 */
int main(void)
{
	int i;
	int a = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			a += i;
		}
		i++;
	}
		printf("%d\n", a);
		return (0);
}

