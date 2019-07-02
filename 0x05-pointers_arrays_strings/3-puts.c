#include "holberton.h"

/**
*_puts - entry point
*
*@str: var
*
*Return: 0
*/

void _puts(char *str)
{

while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
_putchar('\n');

}
