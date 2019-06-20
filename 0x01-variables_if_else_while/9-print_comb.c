#include <stdio.h>

/**
*main - entry point
*
*Return: string
*/

int main(void)
{
	int n = '0';

	while (n <= '9')
{
	putchar(n);
	if (n != '9')
	{
		putchar(',');
		putchar(' ');
		n++;
	}
}
	putchar('\n');

	return (0);
}
