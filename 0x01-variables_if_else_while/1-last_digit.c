#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-program entry point.
 * Return:0 if no error ,error if nonzero.
 **/
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	if (ldigit > 5)
	{
		printf("ldigit of %d is %d it's greater than 5\n", n, ldigit);
	}
	else if (ldigit == 0)
	{
		printf("ldigit of %d is %d and is 0\n", n, ldigit);
	}
	else if (ldigit > 6 && ldigit != 0)
	{
		printf("ldigit of %d is %d it's than 6 and not 0\n", n, ldigit);
	}
	return (0);
}
