#include <stdio.h>

/**
*main - entry point
*
*Return: string
*/

int main(void)
{
	int n;
	int b;

	for (n = '0'; n <= '9'; n++)
	{
		for (b = '0'; b <= '9'; b++)
		{
		if (b > n)
			{
			putchar(n);
			putchar(b);
			if (n != '8' || b != '9')
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
return (0);
}
