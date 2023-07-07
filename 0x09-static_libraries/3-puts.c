#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: The string to be printed.
 *
 * Description: This function prints each character of the string until it
 *              reaches the null terminator, and then prints a new line.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
