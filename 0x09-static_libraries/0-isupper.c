#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
