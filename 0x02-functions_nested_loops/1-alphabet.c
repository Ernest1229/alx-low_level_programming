#include <stdio>
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
	int c;
	c = 97;
	for (c=97; c<=122; c++)
	{
	putchar(c);
	}
	putchar('\n');
	
	return (0);
}
