#include "holberton.h"

/**
*print_alphabet - entry point
*
*Return: 0
*/

void print_alphabet(void)

{
char st;

for (st = 'a' ; st <= 'z' ; st++)
{
_putchar(st);
}
_putchar('\n');
}
