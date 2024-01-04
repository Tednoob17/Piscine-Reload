#include "holberton.h"
#include <stdio.h>

/**
 *_strlen_recursion - print size of string
 *@s: string
 *Return: Size of string
 */
int _strlen_recursion(char *s)
{
int n = 0;

	if (*s != '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}

	return (n);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

		n = _strlen_recursion("Corbin Coleman");
		printf("%d\n", n);
	return (0);
}
