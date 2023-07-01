#include "main.h"

/**
  *times_table - prints times table
  *@a @b @c: are integer parameters
  *
  *Return: 0
  */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
	for (b = 1; b <= 9; b++)
	{
	_putchar('0');	
	c = a * b;
	_putchar(',');
	_putchar(' ');

	if (c <= 9)
	_putchar(' ');
	else
	{
	_putchar((c / 10) + '0');
	_putchar((c % 10) + '0');
	}
	}
	_putchar('\n');
	}
}