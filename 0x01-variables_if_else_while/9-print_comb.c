#include <stdio.h>

/**
  *main - Entry point
  *Functions used are main and putchar
  *
  *Description: Prints all possible combination of single digit numbers
  *Return: 0
  */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
	putchar(a);
	if (a == '9')
	{
	putchar('\n');
	return (0);
	}
	else
	{
	putchar(',');
	putchar(' ');
	a++;
	}
	}

	return (0);
}
