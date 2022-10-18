#include <stdio.h>
/**
 *main-program starting point
 *Return:0 if no error,else error for nonzero.
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
