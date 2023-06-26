#include "main.h"

/**
 * puts2 - Prints every second character of a string.
 * @str: Input string.
 *
 * Description: This function takes an input string and prints only the
 * characters at even indices, starting with the first character (index 0).
 * The function calculates the length of the string and iterates over the
 * characters, printing those at even indices using _putchar.
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}

	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
			_putchar(str[o]);
	}

	_putchar('\n');
}

