#include "holberton.h"

/**
***_strcat - entry point
*
*@dest: var
*
*@src: var
*Return: 0
*/

char *_strcat(char *dest, char *src)
{

int cd = 0;
int cs;
char *p;

while (dest[cd] != '\0')
	cd++;

for (cs = 0; src[cs] != '\0'; cs++)
	{
	dest[cd] = src[cs];
	cd++;
	}

dest[cd] = '\0';

p = dest;

return (p);

}
