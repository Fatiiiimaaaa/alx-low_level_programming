#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Input string
 * @needle: Substring to be located
 *
 * Return: Pointer to the first occurrence of `needle` in `haystack`,
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
