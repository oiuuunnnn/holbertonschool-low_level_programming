#include <stdio.h>

/**
*main - entry point
*
*Return: string
*/

int main(void)
{
	int n = '0';

	for (n = '0'; n <= '9'; n++)
{
	putchar(n);
	if (n != '9')
	{
		putchar(',');
		putchar(' ');
	}
}
	putchar('\n');
	return (0);
}
