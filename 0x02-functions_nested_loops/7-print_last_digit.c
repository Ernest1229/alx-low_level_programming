#include "main.h"

/**
  *print_last_digit - prints last digit
  *@r: integer
  *
  *Return: j
  */

int print_last_digit(int r)
{
	int j;

	j = r % 10;
	_putchar(j);

	return (j);


}
