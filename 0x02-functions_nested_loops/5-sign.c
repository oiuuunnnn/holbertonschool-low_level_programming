#include "holberton.h"

/**
*_print_sign - entry point
*
*@n: character
*
*Return: 0
*/

int print_sign(int n)

{

if (n > '0')
{
return (1);
return ('+');
}
else if (n == '0')
{
return (0);
_putchar('0');
}
else if (n < '0')
{
return (-1);
_putchar('-');
}

return (0);
}
