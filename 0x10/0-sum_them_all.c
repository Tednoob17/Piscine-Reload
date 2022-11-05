#include "variadic_functions.h"
/**
 *sum_them - this functions returns the sum of all parameters
 *@n: numbers of all parameters
 *Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = 0;
	int sum = 0;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg,n);
	while(i < n)
	{
		sum +=va_arg(arg, int);
		i++;
	}
			va_end(arg);
	return (sum);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);
    return (0);
}
