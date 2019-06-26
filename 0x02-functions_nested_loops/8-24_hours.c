#include "holberton.h"

/**
*jack_bauer - entry point
*
*Return: 0
*/

void jack_bauer(void)

{

char h, m, hh, mm;

h = '0';
m = '0';
hh = (24 + 48);
mm = (60 + 48);

for (h = '0'; h <= hh; h++)
	for (m = '0'; m <= mm; m++)
	if (h < hh && m < mm)
	{
	_putchar(h / 10);
	_putchar(h % 10);
	_putchar(':');
	_putchar(m / 10);
	_putchar(m % 10);
	}

_putchar('\n');

}
