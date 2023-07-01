#include "main.h"

/**
  *print_to_98 - prints numbers from n to 98
  *@a: integer
  *@n: integer
  *
  *Return: 0
  */

void print_to_98(int)
{
	int a;
	int n;

	for (a = n; a <= 97; a++)
	{
	if (a <= 9)
	{
	_putchar(a + '0');
	}
	else
	{
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');
	}
	_putchar(',');
	_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
}
