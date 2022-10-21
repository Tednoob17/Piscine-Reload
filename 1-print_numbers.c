#include <stdio.h>
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	va_list list;

	if (separator != NULL)
	{
		va_start(list, n);
		for (i = 0; i < n - 1; i++)
		{
			printf("%d",va_arg(list, int));
			printf("%s",separator);
		}
	}
va_end(list);
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
