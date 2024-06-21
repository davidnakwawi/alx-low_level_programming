#include "main.h"

/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: maximum number of bytes to concatenate from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Concatenate at most n bytes from src to dest */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Null-terminate dest */
	dest[i] = '\0';

	return (dest);
}
