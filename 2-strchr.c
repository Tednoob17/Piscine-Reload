#include <stdio.h>
char *_strchr(char *s, char c);
char *_strchr(char *s, char c)
{
	int i = 0;
	int y = 0;
	char *str[98];

	    while ( *(s + i) != '\0')
	    {	
		if ( *(s + i) == c)
			return (s + i);
			
			i++;
	    }
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
