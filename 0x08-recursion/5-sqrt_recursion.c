#include "main.h"

/**
 * _root_square - Helper function to find the square root recursively.
 * @a: The number for which the square root is to be found
 * @b: The current value being checked
 *
 * Return: The square root of a if it exists, otherwise -1
 */
int _root_square(int a, int b)
{
	if (b * b == a)
		return (b);

	if (b * b > a)
		return (-1);

	return (_root_square(a, b + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is to be found
 *
 * Return: The square root of n if it exists, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_root_square(n, 0));
}

