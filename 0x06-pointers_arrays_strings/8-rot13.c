#include "holberton.h"

/**
***rot13 - entry point
*
*@s: var
*
*Return: 0
*/

char *rot13(char *s)
{

int c;
int ca;
char a[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

for (c = 0; s[c] != '\0'; c++)
	{
	for (ca = 0; a[ca] != 'Z'; ca++)
		if (s[c] == a[ca] && ca < 25)
		s[c] = a[ca + 25];
		else if (s[c] == a[ca] && ca > 25)
		s[c] = a[(ca + 25) - 52];
	}

return (s);
}
