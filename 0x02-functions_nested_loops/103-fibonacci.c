#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int previous = 1;
	unsigned long int current = 2;
	unsigned long int sum = 0;

	while (current <= 4000000)
	{
		if (current % 2 == 0)
		{
			sum += current;
		}

		unsigned long int next = previous + current;

		previous = current;
		current = next;
	}

	printf("Sum of even-valued terms: %lu\n", sum);

	return (0);
}
