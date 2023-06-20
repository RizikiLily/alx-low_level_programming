#include <stdio.h>
/**
 * main - computes fibonacci numbers
 * Return: 0(success)
 */
int main(void)
{
	int i = 1;
	int first = 1;
	int second = 2;
	int next;

	printf("%d, %d, ", first, second);
	while (i != 48)
	{
		next = first + second;
		if (i == 48)
			printf("%d", next);
		else
			printf("%d, ", next);
		first = second;
		second = next;
		i++;
	}
	return (0);
}
