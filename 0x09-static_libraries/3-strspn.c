#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: the number of characters in the initial segment of s
 *         consisting only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int n = 0;
    int r;

    // Iterate through each character in s until we reach null terminator
    while (*s)
    {
        // Iterate through each character in accept
        for (r = 0; accept[r]; r++)
        {
            if (*s == accept[r])
            {
                n++;
                break;
            }
            else if (accept[r + 1] == '\0')
            {
                return n; // Return the length of the initial segment
            }
        }
        s++;
    }

    return n; // Return the final count of characters in s from accept
}
