#include "holberton.h"
#include <stdio.h>


/**
 *_pows_recursion - print pow of x by y
 *@x : number
 *@y : power
 *Return : POw of x by y
 */
int _pow_recursion(int x, int y){


if (y == 0)
	return (1);
else if (x == 0 )
	return(0);
else (y < 0)
	return(-1);
else
	return(x *  _pow_recursion(x,y -1));
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
