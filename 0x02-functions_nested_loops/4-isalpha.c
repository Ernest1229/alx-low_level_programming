#include "main.h"

/**
  *_isalpha - alphabetic character
  *@c: integer parameter is used
  *
  *Return: 0 and 1
  */

int _isalpha(int c);
{

	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
	{
	return (1);
	}

	else
	{
	return (0);
	}
}
