#include "main.h"

/**
  *print_numbers - prints numbers 0 to 9 followed by a newline
  *@a : integer parameter
  *
  *Return: a
  */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	_putchar(a + '0');
	}
	_putchar('\n');
}
