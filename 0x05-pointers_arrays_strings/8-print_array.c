#include "main.h"
#include <stdio.h>

/**
  *print_array - prints an array of integers
  *@a: integer
  *@n: integer
  *
  *Return: 0
  */

void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}

	printf("\n");
}
