#include <stdio.h>

/**
*main - entry point
*
*Return: string
*/

/* betty style doc for function main goes there */

int main(void)
{
	char n = '0';
	char br = '\n';

	while (n <= '9')
{
	putchar(n);
	n++;
}
	putchar(br);

	return (0);
}
