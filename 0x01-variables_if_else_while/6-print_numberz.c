#include <stdio.h>
#include <stdlib.h>

/**
  *main - entry point
  *no parameter
  *
  *Description: prints single digit numbers followed by a new line
  *Return:0
  */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
	putchar (i);
	}
	putchar ("\n");
	return (0);
}
