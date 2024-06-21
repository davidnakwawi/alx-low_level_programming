#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert.
 *
 * Return: the converted integer.
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	/*Skip leading whitespace characters*/
	while (s[i] == ' ')
	{
		i++;
	}

	/*Check for optional sign*/
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/*Process digits and build the result*/
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}

	/*Apply sign*/
	return sign * (int)res;
}

