#include "holberton.h"

/**
*print_alphabet_x10 - entry point
*
*Return: 0
*/

void print_alphabet_x10(void)

{
char st;
int x = 0;

for (x = 0 ; x <= 10; x++)
{
	for (st = 'a' ; st <= 'z' ; st++)
	{
	_putchar(st);
	}
_putchar('\n');
}
}
