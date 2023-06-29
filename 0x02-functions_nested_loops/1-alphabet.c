#include "main.h"

/**
  *print_alphabet - Function name
  *Parameters are c and _putchar function
  *
  *Description: prints the alphabet in lowercase followed by a newline
  *Return: 0
  */

void print_alphabet(void)
{
	char c;

	c = 'a';
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');

	return (void);
}
