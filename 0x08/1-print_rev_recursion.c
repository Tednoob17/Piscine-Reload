#include "holberton.h"

/**
 *_print_rev_recursion - print  string a reverse
 *@s - string who will reverse
 *Return : Void
 */
void _print_rev_recursion(char *s){

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}                                                    
