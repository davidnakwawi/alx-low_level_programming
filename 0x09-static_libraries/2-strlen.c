#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	/*Iterate through the string until the null terminator is reached*/
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
