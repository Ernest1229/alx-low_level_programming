#include "main.h"

/**
  *print_alphabet_x10 - print the alphabets 10 times
  *function used is _putchar
  *
  *Description: Use _putchar to print alphabets on newline
  */

void print_alphabet_x10(void)
{
	char c;
	int d = 1;

	while (d <= 10)
	{
	c = 'a';
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	d++;
	}
}
