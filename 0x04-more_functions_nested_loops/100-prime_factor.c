#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143,
 *        followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int number;         /* The number to find the largest prime factor of */
	long int largest_factor; /* The largest prime factor found */
	long int i;              /* Loop variable */

	number = 612852475143;
	largest_factor = -1;

	while (number % 2 == 0)
	{
		largest_factor = 2;
		number /= 2;
	}

	for (i = 3; i <= sqrt(number); i = i + 2)
	{
		while (number % i == 0)
		{
			largest_factor = i;
			number = number / i;
		}
	}

	if (number > 2)
		largest_factor = number;

	printf("%ld\n", largest_factor);

	return (0);
}

