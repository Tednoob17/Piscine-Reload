#include "variadic_functions.h"
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

	while (*(format + i) != '\0')
	{
		
	
	
	
	}

}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
