#include <stdio.h>
/**
 * main - computes fibonacci numbers with sum less than 4,000,000
 * Return: 0(success)
 */
int main(void)
{
	long firs = 1;
	long second = 2;
	long next;
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
	printf("%ld", sum);
	return (0);
}
