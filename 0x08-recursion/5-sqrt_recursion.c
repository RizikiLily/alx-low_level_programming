#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - calculates natural square root
 * @n: number to find square root
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural square root
 * @n: numberr
 * @i: iteration value
 * Return: square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
