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
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
