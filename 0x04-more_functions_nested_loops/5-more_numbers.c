#include "main.h"

/**
  *more_numbers - print the numbers 0 to 14 ten times
  *no parameter
  *
  *Return: 0
  */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
	for (b = 0; b <= 14; b++)
	{
	if (b >= 10)
	{
	_putchar((b / 10) + '0');
	}
	_putchar((b % 10) + '0');
	}
	_putchar('\n');
	}
}
