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

while (str[c] != '\0')
	{
	_putchar(str[c]);
	c++;
	c++;
	}

_putchar('\n');

}
