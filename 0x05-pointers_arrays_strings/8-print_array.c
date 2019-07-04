#include "holberton.h"
#include <stdio.h>

/**
*print_array - entry point
*
*@a: var
*
*@n: var
*/

void print_array(int *a, int n)
{

int c = 0;

while (c < n)

{
	printf("%d", a[c]);
	c++;
	if (c != n)
	{
	printf(",");
	printf(" ");
	}
}

printf("\n");

}
