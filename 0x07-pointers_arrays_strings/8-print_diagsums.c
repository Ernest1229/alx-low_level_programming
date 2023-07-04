#include <stdio.h>

/**
  *print_diagsums - prints sum of 2 disgonals of a square matrix
  *@a: array of integers
  *@size: size of matrix
  *
  *Return: 0
  */

void print_diagsums(int *a, int size)
{
	int b;
	int d1;
	int d2;
	int s;

	d1 = 0;
	d2 = 0;
	s = size * size;

	for (b = 0; b < s; b += size + 1)
	{
		d1 += a[b];
	}

	for (b = size - 1; b < s - 1; b += size - 1)
	{
		d2 += a[b];
	}

	printf("%d, %d\n", d1, d2);
}
