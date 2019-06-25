#include "holberton.h"

/**
*print_last_digit - entry point
*
*@a: integer
*
*Return: 0
*/

int print_last_digit(int a)

{
int x;
x = a % 10;

if (x < 0)
{
x = -x;
_putchar('0' + x);
}
else

_putchar('0' + x);

return (0);
}
