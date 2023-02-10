#include "variadic_functions.h"
/**
 *print_numbers - this functions prints numbers followed by a new line
 *@separator: this a strings who separate any numbers in them
 *@n: number of integers passed in arguments
 @Return : Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg;

	va_start(arg, n);
	while (i < n)
	{
		if (i == 0)
		{
			printf("%d",va_arg(arg, int));
		}
		else{
			printf("%s",separator);
                        printf("%d",va_arg(arg, int));
		}
		i++;
	}

	va_end(arg);
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
