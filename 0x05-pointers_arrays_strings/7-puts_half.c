#include "main.h"

/**
  *puts_half - prints half of a string
  *@str: string
  *
  *Return: 0
  */

void puts_half(char *str)
{
	int n;
	int i;

	while (str[n])
	{
		n++;
	}

	if (n % 2 == 1)
	{
		i = (n - 1) / 2;
		i = n - i;
	}

	else
	{
		i = n / 2;
	}

	for (; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
