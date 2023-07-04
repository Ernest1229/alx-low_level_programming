#include "main.h"

/**
  *_strcmp - compares two strings
  *@s1: string
  *@s2: string
  *
  *Return: 0
  */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;

	while (s1[a] == s2[a] && s1[a] && s2[a])
	{
		a++;
	}

	return (s1[a] - s2[a]);
}
