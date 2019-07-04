#include "holberton.h"

/**
*puts_half - entry point
*
*@str : var
*
*/

void puts_half(char *str)
{

int c = 0;
int z;

while (str[c] != '\0')
	c++;

if ((c % 2) != 0)
	z = c - ((c - 1) / 2);
else
	z = c / 2;

while (z < c)
	{
	_putchar(str[z]);
	z++;
	}

_putchar('\n');

}
