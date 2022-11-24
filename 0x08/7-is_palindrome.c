#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("holberton");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
int is_palindrome(char *s){
	int i = 0, first,end;

	while (*(s + i) != '\0'){
		if ( i == 0)
			first = (s);
		i++;
	}
		end = *(s + i);
	_putchar(fisrt);
	_putchar(end);

	return(i);
	
}
/*int check_it(char *s){} */
