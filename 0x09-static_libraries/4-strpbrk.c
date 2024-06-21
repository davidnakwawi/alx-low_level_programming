#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: a pointer to the character in s that matches one of the characters
 *         in accept, or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	/*Iterate through each character in s until we reach null terminator*/
	while (*s != '\0')
	{
	/*Iterate through each character in accept*/
	for (k = 0; accept[k] != '\0'; k++)
	{
		if (*s == accept[k])
		{
			return (s);
		}
	}
	s++;
	}
	return (NULL);
}

