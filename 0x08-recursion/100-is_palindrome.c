#include "main.h"

/**
 * checkp - helper function to check if a string is a palindrome
 * @s: string to check
 * @len: length of the string
 * @i: iterator
 * Return: 1 if palindrome, 0 if not
 */
int checkp(char *s, int len, int i)
{
    if (s[i] != s[len - i - 1])
        return (0);
    if (i >= len / 2)
        return (1);
    return (checkp(s, len, i + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return checkp(s, len, 0);
}
