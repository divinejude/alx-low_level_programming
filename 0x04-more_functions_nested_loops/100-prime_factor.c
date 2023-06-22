#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: Return 0
 */

int main(void)
{
	long x, max_p;
	long n = 612852475143;
	double sq_rt = sqrt(n);

	for (x = 1; x <= sq_rt; x++)
	{
		if (n % x == 0)
		{
			max_p = n / x;
		}
	}
	printf("%ld\n", max_p);
	return (0);
}
