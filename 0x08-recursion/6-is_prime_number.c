#include "main.h"

/**
 * prime_number - Helper function to check if a number is prime recursively.
 * @a: The number to be checked
 * @b: The divisor value
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int prime_number(int a, int b)
{
	if (a % b == 0 && b != a)
		return (0);
	if (a % b == 0 && b == a)
		return (1);
	return (prime_number(a, b + 1));
}

/**
 * is_prime_number - Checks if an input integer is a prime number.
 * @n: The number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_number(n, 2));
}

