#include <unistd.h>
/**
 *_putchar - print char
 *@c : char in parameter
 *Return: A char in functions of ASCII number
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
