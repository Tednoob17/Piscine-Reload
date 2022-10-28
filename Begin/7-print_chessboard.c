#include <stdio.h>
#include <unistd.h>

int _putchar(char c)
{
	return (write (1, &c, 1));
}
void print_chessboard(char (*a)[8]);
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;
	int k = 0;
		
		for (j = 0; a[i][j] != a[8][8]; j++)
		{	

			if ((a[i][j] >= 97 &&  a[i][j] <= 122) || (a[i][j] >= 65 &&  a[i][j] <= 90))
			{	
				_putchar(a[i][j]);
			}
			k++;
			if (k % 8 == 0)
				_putchar('\n');
			else if (k == 64)
				break;
		}	
}

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char board[8][8] = {
{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
};
print_chessboard(board);
return (0);
}

