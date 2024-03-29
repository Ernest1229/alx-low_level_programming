#include "main.h"

/**
  *_memcpy - copies memory area
  *@dest: memory area being copied to
  *@src: memory area being copied from
  *@n: bytes
  *
  *Return: *dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
