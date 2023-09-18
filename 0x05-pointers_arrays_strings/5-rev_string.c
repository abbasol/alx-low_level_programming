#include "main.h"

/**
 * rev_string - Reverses a string in-place
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
    int length = 0;
    int start, end;
    char temp;

    // Calculate the length of the string
    while (s[length] != '\0')
    {
        length++;
    }

    // Reverse the string in-place
    start = 0;
    end = length - 1;

    while (start < end)
    {
        // Swap characters at start and end positions
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        // Move towards the center
        start++;
        end--;
    }
