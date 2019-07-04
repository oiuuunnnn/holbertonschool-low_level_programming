#include "holberton.h"

/**
*puts2 - entry point
*
*@str: var
*
*/

void puts2(char *str)
{

int c = 0;
int z;

while (str[c] != '\0')
	c++;

for (z = 0; z < c; z++)
	{
	_putchar(str[z]);
	z++;
	}

_putchar('\n');

}
