#include "main.h"

/**
  *print_square- prints a square of size n made of #
  *@size : integer parameter
  *
  *Return : 0
  */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (a = 1; a <= size; a++)
	{
	for (b = 1; b <= size; b++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
}
