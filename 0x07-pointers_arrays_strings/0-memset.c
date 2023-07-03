#include "main.h"

/**
  *_memset - fills memory with a constant byte
  *@s: pointer
  *@b: constant byte to fill with
  *@n: memory to fill
  *
  *Return: (s) - pointer to the memory address
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s);
}
