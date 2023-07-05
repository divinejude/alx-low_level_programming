#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: Pointer to the string to calculate the length of
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (!s || !*s)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

