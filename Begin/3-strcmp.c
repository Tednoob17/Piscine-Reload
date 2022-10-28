#include <stdio.h>

int _strcmp(char *s1, char *s2);
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int o = 0;
	int n = 0;
	while ( *(s1 + i) != '\0')
	{
		i++;
	}

	while ( *(s2 + o) != '\0')
	{
		o++;
	}
	if (i < o)
		n = -15;
	else if (i > o)
		n = 15;
	else
		n = 0;

	return (n);
}

















/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
