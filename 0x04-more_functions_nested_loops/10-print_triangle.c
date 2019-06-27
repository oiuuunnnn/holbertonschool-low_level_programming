#include "holberton.h"

/**
*print_triangle - entry point
*
*Return: 0
*/

void print_triangle(int size)

{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');
	else
		for (x = 1; x <= size; x++)
		{
			z = size -x;
			for (y = 1; y <= size; y++)
			{
				if (y <= z)
				_putchar(' ');
				else
				_putchar('#');
			}
		_putchar('\n');
		}
}
