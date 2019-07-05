#include "holberton.h"

/**
***string_toupper - entry point
*
*@s: var
*
*Return: 0
*/

char *string_toupper(char *s)
{

int c;

for (c = 0; s[c] != '\0'; c++)
	if (s[c] <= 122 && s[c] >= 97)
	{
	int p = s[c];

	s[c] = p - 32;
	}

return (s);
}
