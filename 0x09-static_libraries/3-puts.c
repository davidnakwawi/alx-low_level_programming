#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: the string to print
 */
void _puts(char *str)
{
	int i = 0;

	/*Loop through each character of the string until the null terminator*/
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
