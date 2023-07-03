#include "main.h"

/**
  *print_diagonal - draws a diagonal line
  *@n: integer parameter
  *
  *Return: 0
  */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
	_putchar('\n');
	}
	for (a = 1; a <= n; a++)
	{
	for (b = 1; b <= a; b++)
	{
	if (a == b)
	{
	_putchar('\\');
	_putchar('\n');
	}
	else
	{
	_putchar(' ');
	}
	}
	}
}
