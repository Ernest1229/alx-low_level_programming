#include "main.h"

/**
  *reverse_array - reverses the content of an array
  *@a: integer
  *@n: integer
  *
  *Return: 0
  */

void reverse_array(int *a, int n)
{
	int b;
	int c;
	
	b = 0;
	c = 0;

	int d[20];

	n--;

	while (b <=n)
	{
		d[n - b] = a[b];
		b++;
	}

	while (c <= n)
	{
		a[c] = d[c];
		c++;
	}
}
