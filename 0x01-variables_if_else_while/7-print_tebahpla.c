#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *no parameter
 *
 *Description: prints the lowercase alphabet in reverse
 *Return:0
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
	putchar (i);
	}
	putchar ("\n");
	return (0);
}
