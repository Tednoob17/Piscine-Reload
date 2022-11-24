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
	return(check_it(*s));
}

int check_it(char *s){

int i = 0, n = 0, first, end, verif;

        while (*(s + i) != '\0'){
                if ( i == 0)
                        first = *(s);
                else
                        end = *(s + i);

                i++;
        }
        _putchar(first);
        _putchar(end);
                if (first != end)
                        return(0);
                else{
		while( n < (i / 2)){
			first = *(s + n);
	       		  end = *(s + i - n);
			  if (first == end)
				verif++;
                }
		if (verif == (i / 2))
			return(1);
		else
			return(0);
}
