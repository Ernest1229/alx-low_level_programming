#include <stdio.h>

/**
  *main - Entry point
  *Parameter - putchar and main function
  *
  *Description: program prints all numbers of base 16 in lowercase
  *Return: 0
  */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
