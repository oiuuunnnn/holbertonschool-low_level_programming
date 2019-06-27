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

if (n > -1)
{
/*_putchar('\n');*/

	for (a = 0; a < n; a++)
	{
	_putchar('_');
	}
}
_putchar('\n');
}
