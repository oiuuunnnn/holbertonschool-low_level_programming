#include <stdio.h>

/**
*main - entry point
*
*Return: 0
*/

int main(void)

{

long n = 612852475143;
long x;

for (x = 2; x <= n; x++)
{
	if (n % x == 0)
	{
		n = n / x;
		x--;
	}
}

printf("%ld\n", x);

}
