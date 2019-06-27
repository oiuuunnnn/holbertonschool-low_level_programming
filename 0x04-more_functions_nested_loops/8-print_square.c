#include "holberton.h"

/**
*print_square - entry point
*
*@size: var
*
*Return: 0
*/

void print_square(int size)

{

	int x;
	int y;

	if (size <= 0)
		_putchar('\n');
	else
		for (x = 1; x <= size; x++)
			{
			for (y = 1; y <= size; y++)
			_putchar('#');
			_putchar('\n');
			}
}
