#include "holberton.h"

/**
**_atoi - entry point
*
*@s: var
*
*Return: 0
*/

int _atoi(char *s);
{

int c = 0;
int z;

while (s[c] != '\0')
	c++;

for (z = 0; z <= c; z++)
	{
	if (s[z] >= 48 && s[z] <= 57)
	break;
	}

if (s[z] == '\0')
return (0);
else
	{


	}

}
