#include <stdio.h>

/**
 * main - Prints the alphabets from a to z in lowercase and uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabets[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
