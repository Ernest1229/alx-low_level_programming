#include "main.h"

/**
  *_strncat - function that concatenates two strings
  *@dest: string
  *@src: string
  *@n : integer
  *
  *Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int r;
	int tam;

	i = 0;
	r = 0;
	tam = 0;

	for (; dest[tam];)
	{
		tam++;
	}

	while (r < n && src[r])
	{
		dest[tam + i] = src[r];
		i++;
		r++;
	}
	return (dest);
}
