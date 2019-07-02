#include "holberton.h"

/**
*print_rev - entry point
*
*@s: var
*
*/

void print_rev(char *s)
{

int c = 0;

while (s[c] != '\0')
	c++;

while (c >= 0)
	{
	_putchar(s[c]);
	c--;
	}

_putchar('\n');

}
