#include "holberton.h"

/**
*more_numbers - entry point
*
*Return: 0
*/

void more_numbers(void)

{

int c;
int d;

for (c = 0; c < 10; c++)
	{
	for (d = 0; d <= 14; d++)
		{
		if (d > 9)
		_putchar((d / 10) + '0');
		_putchar((d % 10) + '0');
		}
	_putchar('\n');
	}
}
