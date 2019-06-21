#include <stdio.h>

/**
*main - entry point
*
*Return: string
*/

int main(void)
{
	int n = '0';
	int b = '0';

	while (n <= '9')
	{
		for (b = '0'; b <= '9'; b++)
		{
		putchar(n);
		putchar(b);
		putchar(',');
		putchar(' ');
		}
	n++;
	}
	putchar('\n');
return (0);
}
