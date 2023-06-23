#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *main - Entry point
  *parameter is print_alphabet
  *
  *Description: prints the alphabet in lowercase followed by a newline
  *Return: 0
  */

void print_alphabet(void);

int main(void)
{
	char c;

	c = 'a';
	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');

	return (0);
}
