#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length])
		length++;

	for (i = (length + 1) / 2; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
