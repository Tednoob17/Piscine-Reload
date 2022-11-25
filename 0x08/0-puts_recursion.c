#include "holberton.h"

/**
 *_puts_recursion - prints a string followed by a new line
 *@s : pointer to string
 *Return: Void
 */

void _puts_recursion(char *s)
{

	if ((*s) == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	_puts_recursion("Betty Holberton");
	return (0);
}
