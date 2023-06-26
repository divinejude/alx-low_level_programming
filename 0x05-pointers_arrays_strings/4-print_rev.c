#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 *
 * Description: This function calculates the length of the string, then
 *              iterates through the string in reverse order and prints
 *              each character until it reaches the beginning of the string,
 *              and then prints a new line.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;

	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
