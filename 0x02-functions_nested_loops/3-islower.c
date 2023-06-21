#include "main.h"

/**
 * _islower - check if the letter  is lowercase
 * @c: is the letter to be checked
 * Return: 1 if letter is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

