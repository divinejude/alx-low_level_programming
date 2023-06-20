#include "main.h"

/**
 * print_sign - check for the sign of a number
 * @n: the number to be checked
 * Return: 1 if positive and 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
