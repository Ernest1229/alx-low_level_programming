#include <stdlib.h>
#include <stdio.h>

/**
  *main - Entry point for code
  *Parameter is alpha with type char
  *
  *Description : Print letters of the alphabet except e and q
  *Return: 0
  */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha = 'z'; ++alpha)
	{
	if (alpha != 'e' && alpha != 'q')
	putchar (alpha);
	}
	putchar ('\n');
	return (0);
}
