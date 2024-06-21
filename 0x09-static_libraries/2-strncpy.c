#include "main.h"

/**
 * _strncpy - copies up to n characters from the string src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	/*Copy up to n characters from src to dest*/
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	/*If src has fewer than n characters, pad dest with null characters*/
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
