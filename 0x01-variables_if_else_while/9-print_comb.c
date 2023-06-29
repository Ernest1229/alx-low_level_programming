#include <stdio.h>

/**
  *main - Entry point
  *Functions used are main and putchar
  *
  *Description: A program that prints all possible combination of single digit numbers
  *Return: 0
  */

int main(void)
{
	int a;

	for(a = '0'; a <= '8'; ++a)
	{
	putchar(a);
	putchar(44);
	putchar(0);
	}

	putchar(57);
	
	return (0);
}
