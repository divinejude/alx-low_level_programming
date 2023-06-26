#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: Input string.
 *
 * Description: This function takes an input string and prints the second half
 * of the string. If the length of the string is odd, it prints the middle
 * character and the characters after it. The function calculates the length of
 * the string and determines the starting index for printing the second half.
 * It then iterates over the string, starting from the calculated index, and
 * prints the characters using _putchar.
 */
void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}

