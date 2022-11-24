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
	return(check_it(s));
	
}
int check_it(char *s){
	int j = 0, i = 0, n = 0, first = 0,end = 0, v, m, k;
	/*char *first = "", end = "";*/
	if (!(*s)){
		return(0);
	}

	while (*(s + i) != '\0'){
		first = *(s + i);
 		n++;
 		i++;
		}
		if (i % 2 != 0)
			return(0);

		j = i;
		end = *(s + j);
		i = 0;
		v = j / 2;
		while (i < (j / 2)){
			if (first == end){
				first = *(s + i);
				m = j - i;
				end = *(s - m);
				k++;
			}
			i++;
		}
		if ( v == k)
			return(0);
		else
			return(1);
}

