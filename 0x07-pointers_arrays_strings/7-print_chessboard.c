#include "main.h"

/**
  *print_chessboard - prints a chessboard
  *@a: 2d array
  *
  *Return: 0
  */

void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (a = 0; a < 8; a++)
	{
	for (b = 0; b < 8; b++)
	{
	putchar(a[b][c]);
	}
	putchar('\n');
	}
}
