#include "holberton.h"

/**
*main - entry point
*
*Return: string
*/

int main(void)

{
char st[] = "Holberton";
int x = 0;

while (st[x] != '\0')
	{
	_putchar(st[x]);
	x++;
	}

_putchar('\n');
return (0);
}
