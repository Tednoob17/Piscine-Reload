#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_strings - this functions prints strings followed by the new line
 *@separator: it's strings who separate any strings into them
 *@n: it's numbers of variable in parameteers
 *Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg;

	va_start(arg, n);
	while(i < n)
	{
		if (i == 0)
			printf("%s",va_arg(arg, char *));
		else
		{
			printf("%s",separator);
			printf("%s",va_arg(arg, char *));
		}
		i++;
	}
	va_end(arg);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
