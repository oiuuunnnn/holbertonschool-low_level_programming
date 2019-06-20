#include <stdio.h>

/**
*main - entry point
*
*Return: string
*/

/* betty style doc for function main goes there */

int main(void)
{
	char lt;
	char br;

	lt = 'z';
	br = '\n';

	for (lt = 'z'; lt >= 'a'; lt--)
	putchar(lt);
	putchar(br);
	return (0);
}
