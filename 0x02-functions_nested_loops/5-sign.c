#include "holberton.h"

/**
*print_sign - entry point
*
*@n: character
*
*Return: 0
*/

int print_sign(int n)

{

if (n > 0)
	{
	_putchar('+');
	return (1);
}
if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
	_putchar('0');
	return (0);
}

return (0);
}
