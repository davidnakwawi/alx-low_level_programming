#include "main.h"

/**
  * _memset - function name
  *
  * @b: parameter b
  *
  * @s: parameter s
  *
  * @n: parameter n
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}