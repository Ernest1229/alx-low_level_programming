#include <stdlib.h>
#include <stdio.h>

/**
  *main - Entry point of function
  *Parameter Alpha is a character
  *
  *description:Function prints a to z then prints A to Z and a newline
  *Return: 0
  */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
	putchar(alpha);
	}

	for (alpha = 'A'; alpha <= 'Z'; ++alpha)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
