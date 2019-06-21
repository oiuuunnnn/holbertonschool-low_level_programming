#include <stdio.h>

/**
*main - entry point
*
*Return: string
*/

int main(void)
{
	int n = '0';
	int b = '0';

	for (n = '0'; n <= '9'; n++)
	{
		for (b = '0'; b <= '9'; b++)
		{
		putchar(n);
		putchar(b);
		if (!(n == '9' && b == '9'))
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}
