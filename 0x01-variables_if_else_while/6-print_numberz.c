#include <stdio.h>

/**
*main - entry point
*
*Return: string
*/

/* betty style doc for function main goes there */

int main(void)
{
	int n = '0';

	while (n <= '9')
{
	putchar(n);
	n++;
}
	putchar('\n');

	return (0);
}
