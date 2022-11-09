#include "variadic_functions.h"
#include <stdarg.h>



void print_char(va_list arg);
void print_int(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format,... );

/**
 * print_char - print char is it's char who is an parameters
 */
void print_char(va_list arg){
	return(printf("%c",c));
}






















































/**
*print_all - this print all
*@format: is a list of types of arguments passed to the functions
*Return : Void
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arg;

	if (!format)
		printf("(nil)");

	va_start(arg, format);
	while (*(format + i) != '\0')
	{
		if (*(format + i) == c || *(format + i) == i || *(format + i) == f || *(format + i) == s )
		{
			    
		
		}
		
		
		
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
    void print_all(const char * const format, ...);
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
