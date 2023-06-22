#include "main.h"

/**
 * print_numbers - Print numbers 0-9 with a newline
 */
void print_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}

	_putchar('\n');
}
