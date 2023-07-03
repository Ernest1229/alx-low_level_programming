#include "main.h"

/**
  *_strchr - locates a character in a string
  *@s: pointer to a string
  *@c: character in a string
  *
  *Return: *c - pointer to c in s
  */

char *_strchr(char *, char c)
{
	while (*s)
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	return (!c ? s : NULL);
}
