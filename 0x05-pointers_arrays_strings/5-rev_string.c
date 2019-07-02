#include "holberton.h"

/**
*rev_string - entry point
*
*@s: var
*
*/

void rev_string(char *s)
{

char rev[100] = "         ";
int c = 0;
int f = 0;
int l;

while (s[c] != '\0')
	c++;

l = c - 1;

for (c = l; c >= 0; c--)
	{
	rev[f] = s[c];
	f++;
	}

for (c = 0; c <= l; c++)
	s[c] = rev[c];

}
