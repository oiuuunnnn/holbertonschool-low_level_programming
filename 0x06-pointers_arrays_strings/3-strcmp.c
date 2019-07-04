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
int y = 0;
int z = 15;

while (s1[x] != '\0')
	x++;

while (s2[y] != '\0')
	y++;

if (x > y)
	return (z);
else if (x < y)
	return (-z);
else
	return (0);

}
