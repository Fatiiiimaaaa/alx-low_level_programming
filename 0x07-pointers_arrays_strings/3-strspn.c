#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Input string
 * @accept: String containing the characters to match
 *
 * Return: Number of bytes in the initial segment of `s` consisting of only
 * bytes from `accept`
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (n);
}
