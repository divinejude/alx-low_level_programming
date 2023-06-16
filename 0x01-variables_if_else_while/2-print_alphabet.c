#include <stdio.h>

/**
 * main - Entry point
 *
 * Desc.: Prints the alphabet in lowercase using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
