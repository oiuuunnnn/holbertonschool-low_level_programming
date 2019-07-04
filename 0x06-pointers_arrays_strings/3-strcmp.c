#include "holberton.h"

/**
**_strcmp - entry point
*
*@s2: var
*
*@s1: var
*
*Return: 0
*/

int _strcmp(char *s1, char *s2)
{

int x = 0;
int z = 0;

while (s1[x] != '\0')
	x++;

while (s2[z] != '\0')
	z++;

if (x > z)
	return (15);
else if (x < z)
	return (-15);
else
	return (0);

}
