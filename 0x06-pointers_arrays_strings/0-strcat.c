#include "main.h"

/**
  *_strcat - concatenates two strings
  *@dest: string 
  *@src: string
  *
  *Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int n;
	int i = 0;
	int r = 0;
	int tam = 0;

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
