#include <stdio.h>
/**
 * main - computes fibonacci numbers with sum less than 4,000,000
 * Return: 0(success)
 */
int main(void)
{
	long first = 1;
	long second = 2;
	long next = 0;
	long sum = 2;

	while (next < 4000000)
	{
		next = first + second;
		if  (next % 2 == 0)
		{
			sum += next;
		}
		first = second;
		second = next;
	}
	printf("%ld\n", sum);
	return (0);
}
