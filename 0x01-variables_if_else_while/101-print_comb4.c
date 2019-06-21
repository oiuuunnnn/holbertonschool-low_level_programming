#include <stdio.h>

/**
*main - entry point
*
*Return: string
*
*/

int main(void)
{
	int n;
	int y;
	int t;

	for (n = '0'; n <= '9'; n++)
		for (y = '0'; y <= '9'; y++)
			for (t = '0'; t <= '9'; t++)
			if (y > n && t > y)
			{
				putchar(n);
				putchar(y);
				putchar(t);
				if (n != '7' || y != '8' || t != '9')
				{
				putchar(',');
				putchar(' ');
				}
			}
	putchar('\n');
return (0);
}
