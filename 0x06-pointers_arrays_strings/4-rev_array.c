#include "holberton.h"

/**
**reverse_array - entry point
*
*@a: var
*
*@n: var
*
*Return: 0
*/

void reverse_array(int *a, int n)
{

int x;
int y;
int l = n - 1;

for (x = 0; x < n / 2; x++, l--)
	{
	y = a[x];
	a[x] = a[l];
	a[l] = y;
	}

}
