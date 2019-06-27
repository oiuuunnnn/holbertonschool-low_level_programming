#include "holberton.h"

/**
*jack_bauer - entry point
*
*Return: 0
*/

void jack_bauer(void)

{

char h, m;

h = 0;
m = 0;

for (h = 0; h <= 24; h++)
	for (m = 0; m <= 60; m++)
	if (h < 24 && m < 60)
	{
	_putchar((h / 10) + '0');
	_putchar((h % 10) + '0');
	_putchar(':');
	_putchar((m / 10) + '0');
	_putchar((m % 10) + '0');
	_putchar('\n');
	}
}
