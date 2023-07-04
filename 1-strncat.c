#include "main.h"

/**
 * _strncat - Concatenate two strings using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to be concatenated
 *
 * Return: Pointer to the resulting string 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_pos = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src_pos < n && src[src_pos] != '\0')
	{
		dest[dest_len] = src[src_pos];
		dest_len++;
		src_pos++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
