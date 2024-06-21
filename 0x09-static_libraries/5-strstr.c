#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search within
 * @needle: the substring to search for
 *
 * Return: pointer to the first occurrence of the substring needle in haystack,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	/*Iterate through haystack until the end*/
	while (*haystack != '\0')

	{
		char *l = haystack;
		char *p = needle;

	/*Check if the substring needle matches from current position in haystack*/
	while (*l == *p && *p != '\0')
	{
		l++;
		p++;
	}

	/*If we reached the end of needle, a match is found*/
	if (*p == '\0')
	{
		return (haystack);
	}

	haystack++;
	}
	return (NULL);
}
