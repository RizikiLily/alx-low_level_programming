#include <stdio.h>
/**
 * main - computes fibonacci numbers
 * Return: 0(success)
 */
int main(void)
{
	int i = 1;
	long int first = 1;
	long int second = 2;
	long int next;

	printf("%ld, %ld, ", first, second);
	while (i <= 98)
	{
		next = first + second;
		if (i == 98)
			printf("%ld", next);
		else
			printf("%ld, ", next);
		first = second;
		second = next;
		i++;
	}
	printf("\n");
	return (0);
}
