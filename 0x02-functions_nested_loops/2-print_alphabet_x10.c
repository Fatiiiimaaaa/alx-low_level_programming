#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char kt;
	int i;

	i = 0;

	while (i < 10)
	{
		kt = 'a';
		while (kt <= 'z')
		{
			_putchar(kt);
			kt++;
		}
		_putchar('\n');
		i++;
	}
}


