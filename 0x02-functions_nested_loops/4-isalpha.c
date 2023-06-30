#include "main.h"

/**
  *_isalpha(int c) - alphabetic character
  *if parameter is used
  *
  *Return: 0 and 1
  */

int _isalpha(int c);
{
	char c;

	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
	return (1);
	}

	else
	{
	return (0);
	}
}
