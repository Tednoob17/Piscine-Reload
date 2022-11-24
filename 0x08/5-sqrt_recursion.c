#include "holberton.h"
#include <stdio.h>

/**
 *_sqrt_recursion - print a square of number n
 *@n : number
 *Return : square of number n
 */
int _sqrt_recursion(int n){
	int i = 0;
	int res = 0;

	if (n < 0)
		return(-1);
	else if (n == 0)
		return(0);
	else if (n == 1)
		return (1);
	else{
		for (i = 0; i < n ;i++){
			if (i * i == n){
				return(i);
			}
		}

	}
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
