#include <stdlib.h>
#include <stdio.h>

/**
  *main - Entry point of program
  *Parameter digit of type int
  *
  *Description: Program to print from 0 to 9
  * Return: 0
  */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; ++digit)
	{
	printf("%d", digit);
	}
	printf("\n");
	return (0);
}
