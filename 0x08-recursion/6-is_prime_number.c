#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - chekcs if a number is a prime number
 * @n: the nuber to be checked
 * Return: integer
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if number is prime
 * @n: number being checked
 * @i: iteration value
 * Return: 1 if prime 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
