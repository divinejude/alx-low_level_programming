#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins required to make change
 *        for a given amount of money.
 * @argc: Argument count.
 * @argv: Arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char **argv)
{
	int amount, coinCount;
	unsigned int i;
	char *p;
	int coins[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = strtol(argv[1], &p, 10);
	coinCount = 0;

	if (!*p)
	{
		while (amount > 1)
		{
			for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
			{
				if (amount >= coins[i])
				{
					coinCount += amount / coins[i];
					amount = amount % coins[i];
				}
			}
		}
		if (amount == 1)
			coinCount++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", coinCount);
	return (0);
}

