#include "holberton.h"

/**
***cap_string - entry point
*
*@s: var
*
*Return: 0
*/

char *cap_string(char *s)
{

int c;
int sec;
int cap;
char set[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125, '\0'};

for (c = 0; s[c] != '\0'; c++)
	{
	if (s[c] == 9)
	s[c] = 32;
	for (sec = 0; set[sec] != '\0'; sec++)
		{
		if (s[c] == set[sec] && s[c + 1] >= 97 && s[c + 1] <= 122)
			{
			cap = s[c + 1];
			s[c + 1] = cap - 32;
			}
		}
	}

return (s);
}
