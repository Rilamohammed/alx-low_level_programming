#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Enty point
*
*Description: Determines either greater than 5, is less than 6, or is 0
*
*Return: Always 0 (success)
*/

int main(void)
{
	int n,l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
	ptintf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
	ptintf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
	ptintf("Last digit of %d is %d and and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
