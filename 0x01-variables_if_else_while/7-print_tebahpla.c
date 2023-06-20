#include <stdio.h>

/**
 * main - Prints the alphabets in reverse from z to a in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
