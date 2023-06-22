#include <stdlib.h>
#include <stdio.h>

/**
  *main-Entry point
  *parameter-alpha
  *
  *Description-Code to print a to z
  *Return:0
  */

int main(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; ++alpha)
	{
	putchar(alpha);
	}
	putchar(' ');
	return (0);
}
