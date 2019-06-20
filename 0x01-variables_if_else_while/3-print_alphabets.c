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
	char lT;
	char br;

	lt = 'a';
	lT = 'A';
	br = '\n';

	for (lt = 'a'; lt < '{'; lt++)
	putchar(lt);
	for (lT = 'A'; lT < '['; lT++)
	putchar(lT);

	putchar(br);

	return (0);
}
