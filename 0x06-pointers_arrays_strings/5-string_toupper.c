#include "main.h"

/**
  *string_toupper - changes all lowercase to uppercase
  *@s: string
  *Return: 0
  */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}

	}
	return (s);
}
