#include <stdio.h>

/**
 * main - the program prints its name
 * @argc: arg counting
 * @argv: args
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
