#include <stdio.h>
/**
 * main - computes fibonacci numbers
 * Return: 0(success)
 */
int main(void)
{
	int i = 1;
	long long int first = 1;
	long long int second = 2;
	long long int next;

	printf("%lld, %lld, ", first, second);
	while (i != 48)
	{
		next = first + second;
		if (i == 48)
			printf("%lld", next);
		else
			printf("%lld, ", next);
		first = second;
		second = next;
		i++;
	}
	printf("\n");
	return (0);
}
