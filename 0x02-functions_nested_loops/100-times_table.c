#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: Number of the times table
 *
 * Description: This function prints the multiplication table for
 *              the given number n. The table is printed in a
 *              formatted manner with proper spacing and alignment.
 *              The valid range for n is 0 to 15.
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0'); /* Print the first element */

		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = i * j;

			if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k < 100)
			{
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar((k / 100) + '0');
				_putchar(((k / 10) % 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

