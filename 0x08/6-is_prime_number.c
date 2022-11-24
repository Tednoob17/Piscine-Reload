#include "holberton.h"
#include <stdio.h>

/**
 *is_prime_number - print is n number is prime number
 *@n : number
 *Return 0 or 1 
 */
int is_prime_number(int n){






}
int verif(int n, int i){

	if ( n <= 0 )
		return(1);
	else{
		if ()
	
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

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
