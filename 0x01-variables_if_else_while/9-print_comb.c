#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9 with space and coma between them.
 *
 * Return: Always 0
 */
int main(void)
{
	int number;
	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
