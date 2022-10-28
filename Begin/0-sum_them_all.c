#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	int i , sum = 0;
	va_list  list;
	if (n == 0)
		return (0);
	else
	{
		va_start(list, n);
			for (i = 0;i < n; i++)
				sum += va_arg(list, int);
		va_end(list);
	}
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
