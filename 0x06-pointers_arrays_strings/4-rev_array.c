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
	index;
	int tmp;
	
	for (index = n -1; index >= n /2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 -index] = a[index];
		a[index] = tmp;
	}
}
