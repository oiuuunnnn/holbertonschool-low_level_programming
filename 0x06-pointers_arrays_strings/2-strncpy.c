#include "holberton.h"

/**
***_strncpy - entry point
*
*@dest: var
*
*@src: var
*
*@n: var
*Return: 0
*/

char *_strncpy(char *dest, char *src, int n)
{

int c;

for (c = 0; src[c] != '\0' && c < n; c++)
	dest[c] = src[c];

while (c < n)
	dest[c++] = '\0';

return (dest);

}
