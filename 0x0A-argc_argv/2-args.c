#include <stdio.h>

/**
 * main - this is funct. that prints args it recei.
 * @argc: arg. co.
 * @argv: args.
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
