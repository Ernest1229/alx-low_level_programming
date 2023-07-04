#include "main.h"

/**
  *rev_string - reverses a string
  *@s: string
  *
  *Return: 0
  */

void rev_string(char *s)
{
	int a;
	int b;
	int c;

	while (s[b])
	{
		b++;
	}

	b = b - 1;

	while (a < b + 1 / 2)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;

		b--;
		a++;
	}
}
