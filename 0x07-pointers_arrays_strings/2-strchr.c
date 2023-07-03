#include "main.h"

/**
  *_strchr - locates a character in a string
  *@s: pointer to a string
  *@c: character in a string
  *
  *Return: *c - pointer to c in s
  */

char *_strchr(char *s, char c)
{
	int a;
	int b;

	a = 0;

	while (s[a])
	{
	a++;
	}
	for (b = 0; b <= a; b++)
	{
	if (c == s[b])
	{
	s += b;
	return (s);
	}
	}
	return ('\0');
}
