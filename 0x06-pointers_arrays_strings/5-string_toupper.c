#include "main.h"

/**
 * string_toupper - Convert all lowercase characters to uppercase
 * @str: Pointer to the string to be modified
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}
