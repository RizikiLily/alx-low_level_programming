#include <math.h>
#include <stdio.h>

/**
 * main - computes largest prime factor of 612852475143
 * Return: 0(sucess)
 */

int main(void)
{
	long c;
	long num = 612852475143;
	long max_num;
	double square = sqrt(num);

	for (c = 1; c <= square; c++)
	{
		if (num % c == 0)
		{
			max_num = num / c;
		}
	}
	printf("%ld\n", max_num);
	return (0);
}
