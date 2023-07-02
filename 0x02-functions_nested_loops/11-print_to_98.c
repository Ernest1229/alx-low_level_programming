#include "main.h"
#include <stdio.h>

/**
  *print_to_98 - prints numbers from n to 98
  *@a: integer
  *@n: integer
  *
  *Return: 0
  */

void print_to_98(int n)
{
	int a;

	if (n <= 97)
	{
	for (a = n; a <= 97; a++)
	{
	printf("%d", a);
	putchar(',');
	putchar(' ');
	}
	}
	else if (n >= 99)
	{
	for (a = n; a >= 99; a--)
	{
	printf("%d", a);
	putchar(',');
	putchar(' ');
	}
	}
	printf("%d", 98);
}
