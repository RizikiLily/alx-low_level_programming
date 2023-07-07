#include "main.h"
#include <stdio.h>

/**
 * main - printa number of arguments
 * @argc: count
 * @argv: vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

