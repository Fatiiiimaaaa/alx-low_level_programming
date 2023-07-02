#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	s--;

	while (length)
	{
		_putchar(*s);
		s--;
		length--;
	}

	_putchar('\n');
}
