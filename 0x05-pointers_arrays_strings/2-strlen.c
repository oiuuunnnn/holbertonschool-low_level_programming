#include "holberton.h"

/**
*_strlen - entry point
*
*@s: var
*
*Return: 0
*/

int _strlen(char *s)
{

int lth = 0;

while (s[lth] != '\0')
	lth++;

return (lth);

}
