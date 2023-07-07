#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer input
 *
 * Return: the absolute value of the integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
