#include "main.h"

/**
*_isdigit - checks for uppercase character
*@c : integer parameter
*
*Return: 1 if uppercase and 0 if otherwise
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
