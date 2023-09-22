#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: This is a pointer to the destination string. The source string will be appended to the end of the destination string.
 * @src: This is a pointer to the source string. The source string is the string that will be appended to the destination string.
 *
 * Return: A pointer that returns to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
