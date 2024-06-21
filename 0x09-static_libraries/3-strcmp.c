#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: 0 if s1 and s2 are equal,
 *         < 0 if s1 is less than s2,
 *         > 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    // Compare each character of s1 and s2 until the end of either string
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]); // Return the difference of the mismatched characters
        }
        i++;
    }

    // If we exit the loop, strings are identical up to the length of the shorter string
    return (s1[i] - s2[i]); // Return the difference of the terminating null characters
}

