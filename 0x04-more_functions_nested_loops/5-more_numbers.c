#include "main.h"

/**
 * more_numbers - Print numbers 0-14 repeated 10 times, with a new line
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
		}

		_putchar('\n');
	}
}
