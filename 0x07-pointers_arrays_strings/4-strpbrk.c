#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Input string
 * @accept: String containing the characters to search for
 *
 * Return: Pointer to the first occurrence of any character from `accept` in
 * the string `s`, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
