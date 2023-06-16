#include <stdio.h>

/**
 * main - Entry point
 *
 * Desc.: Prints the alphabet in lowercase,
 *        excluding 'q' and 'e', using putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
