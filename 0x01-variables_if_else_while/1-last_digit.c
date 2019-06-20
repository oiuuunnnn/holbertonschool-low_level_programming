#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point
*
*Return: string
*/

/* betty style doc for function main goes there */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is ", n);
	printf("%d ", lastDigit);
	if (n == 0)
	printf("and is 0\n");
	else
{
	if (n > 5)
	printf("and is greater than 5\n");
	if ((n < 6) && (n != 0))
	printf("and is less than 6 and not 0\n");
}
	return (0);
}
