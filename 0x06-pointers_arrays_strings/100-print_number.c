#include "holberton.h"

/**
**print_number - entry point
*
*@n: var
*
*Return: 0
*/

void print_number(int n)
{

int c;
int x = n;
int a = 1;
int r;

if (n == 0)
_putchar('0');
else
{
	if (n < 0)
		x = -n;

	for (c = 0; x > 0; c++)
		x = x / 10;

	for (x = 1; x < c; x++)
		a = a * 10;

	for (x = 0; x < c; x++)
		{
		if (n < 0)
			{
			r = ((-n / a) % 10) + '0';
			a = a / 10;
			_putchar(-r);
			}
		else
			{
			r = ((n / a) % 10) + '0';
                        a = a / 10;
                        _putchar(r);
			}
		}
	}
}
