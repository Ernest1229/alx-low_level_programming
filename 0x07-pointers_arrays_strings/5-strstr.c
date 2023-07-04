#include "main.h"

/**
  *_strstr - locates a substring
  *@haystack: string
  *@needle: string
  *
  *Return: 0
  */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *a = haystack;
	char *b = neddle;

	while (*b == *haystack && *b != '\0' && *haystack != '\0')
	{
	haystack++;
	b++;
	}
	if (*b == '\0')
	{
	return (a);
	haystack = a + 1;
	}
	}
	return ('\0');
}
