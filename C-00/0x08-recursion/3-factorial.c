#include "holberton.h"
#include <stdio.h>

/**
 *factorial - print number n factorial
 *@n: number that we going print factorial
 *Return: Number factorial
 */
int factorial(int n)
{
	int i = 0;
	int fact = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	return (0);
}
