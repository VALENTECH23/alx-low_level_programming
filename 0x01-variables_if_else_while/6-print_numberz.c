#include <stdio.h>
/**
 *main-program entry point.
 *Return:0 no error ,else there is an error with nonzero
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
