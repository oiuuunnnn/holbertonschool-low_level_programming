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
	char lt = 'a';
	char br = '\n';

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (lt = 'a'; lt <= 'f'; lt++)
		putchar(lt);

	putchar(br);

	return (0);
}
