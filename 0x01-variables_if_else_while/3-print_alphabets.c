#include <stdio.h>
/**
 *main-program entry point.
 *
 *Return:0 if no error ,else error for nonzero
 */
int main(void)
{
	char i;
	char k;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (k = 'A'; k <= 'Z'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
