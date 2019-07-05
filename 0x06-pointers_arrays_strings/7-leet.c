#include "holberton.h"

/**
***leet - entry point
*
*@s: var
*
*Return: 0
*/

char *leet(char *s)
{

int c;
int cl;
char enc[] = "43071";
char l[] = "aAeEoOtTlL";

for (c = 0; s[c] != '\0'; c++)
	{
	for (cl = 0; cl < 10; cl++, cl++)
		{
		if (s[c] == l[cl] || s[c] == l[cl + 1])
			s[c] = enc[cl / 2];
		}
	}

return (s);
}
