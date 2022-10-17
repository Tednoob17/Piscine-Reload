#include <stdio.h>
char *_strstr(char *haystack, char *needle);
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	while(*(haystack+ i) != '\0')
	{
		if (*(needle + j) == *(haystack + i))
			return (haystack + i);
		else
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
char *s = "hello, world";
char *f = "world";
char *t;
t = _strstr(s, f);
printf("%s\n", t);
return (0);
}
