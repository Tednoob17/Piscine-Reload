#include "variadic_functions.h"
#include <stdarg.h>


void print_float(va_list arg);
void print_char(va_list arg);
void print_int(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format,... );

/**
 * print_char - print char is it's char who is an parameters
 */
void print_char(va_list arg){
	printf("%c", va_arg(arg, int));
}

/*
 *print_int - print int who is a parameter
 */
void print_int(va_list arg){
	printf("%d", va_arg(arg, int));
}	

/*
 * print_string - print a string who is a parameters
 */
void print_string(va_list arg){
	char *str = va_arg(arg, char *);
	str == NULL ? printf("(nil)") : printf("%s", str);
}

/*
 *print_float - print a float or double numbers
 */
void print_float(va_list arg){
	printf("%f", va_arg(arg, double));
}

typedef struct printTypeStruct{
char *type;
void (*printer)(va_list);
} printTypeStruct;

/**
*print_all - this print all
*@format: is a list of types of arguments passed to the functions
*Return : Void
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	va_list arg;
	char *s = "";

	printTypeStruct printtype[] = {
	  { "i", print_int },
	  { "c", print_char},
	  { "s", print_string},
	  { "f", print_float},
	  {NULL,NULL}
	};
	va_start(arg, format);
	while (format && format[i]){
	  j = 0;
	   while (j < 4){
		if (*printtype[j].type == format[i])
		{
			printf("%s", s);	
			printtype[j].printer(arg);
			s = ", ";
			break;
		}
		j++;
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
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
