#include "main.h"

/**
  *print_last_digit - prints last digit
  *@r: integer
  *
  *Return: s
  */

int print_last_digit(int r)
{
	int j;
	char s;

	j = r /10;

	s = _putchar(".1%f", j);

	return (s);


}
