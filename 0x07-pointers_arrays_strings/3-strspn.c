#include "main.h"

/**
  *_strspn - gets the length of a prefix substring
  *@s: string from initial segment
  *@accept: string from accepted segment
  *
  *Return: s - number of bytes
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;

	a = 0;
	c = 0;

	while (accept[a])
	{
	b = 0;

	while (s[b] != 32)
	{
	if (accept[a] == s[b])
	{
	c++;
	}
	b++;
	}
	a++;
	}
	return (c);
}
