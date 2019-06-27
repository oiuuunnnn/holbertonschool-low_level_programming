#include "holberton.h"

/**
*print_line - entry point
*
*@n: var
*
*Return: 0
*/

void print_line(int n)

{
int a;

if (n <= 0)
_putchar('\n');
else
	{
	for (a = 0; a <= n; a++)
	_putchar('_');
	}
_putchar('\n');
}
