#include "main.h"
#include <stdio.h>

/**
  *main- entry point
  *no integer parameter
  *
  *Return: 0
  */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
	if (a == 100)
	{
	printf("Buzz");
	}
	else if ((a % 3 == 0) && (a % 5 == 0))
	{
	printf("FizzBuzz ");
	}
	else if (a % 5 == 0)
	{
	printf("Buzz ");
	}
	else if (a % 3 == 0)
	{
	printf("Fizz ");
	}
	else
	{
	printf("%d ", a);
	}
	}
	putchar('\n');

	return (0);
}
