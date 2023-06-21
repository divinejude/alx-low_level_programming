#include "main.h"

/**
 * positive_or_negative - Entry point
 *
 * Desc: Assigns a random number to the variable n and
 *       prints whether the number is positive, negative, or zero.
 * @n: the input no
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
