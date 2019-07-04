#include "holberton.h"

/**
***_strncat - entry point
*
*@dest: var
*
*@src: var
*
*@n: var
*Return: 0
*/

char *_strncat(char *dest, char *src, int n)
{

int cd = 0;
int cs;
int x;
char *p;

while (dest[cd] != '\0')
	cd++;

while (src[cs] != '\0')
	cs++;
	x = cs;

for (cs = 0; src[cs] != '\0' && cs < n; cs++, cd++)
	dest[cd] = src[cs];

if (x < n)
	dest[cd] = '\0';

p = dest;

return (p);

}
