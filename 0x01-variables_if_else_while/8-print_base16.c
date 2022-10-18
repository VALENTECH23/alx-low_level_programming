#include <stdio.h>
/**
 *main-program starting point
 *Return:0 if no error .else error for nonzero.
 */
int main(void)
{
	int i;
	char hexadecimal[] = "0123456789abcdef";

	for (i = '0'; i < 16; i++)
	{
		putchar(hexadecimal[i]);
	}
	putchar('\n');
	return (0);
}
