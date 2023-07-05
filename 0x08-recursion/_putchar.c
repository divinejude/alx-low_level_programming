#include "main.h"
#include <unistd.h>

/**
 * _putchar - this will write the letter c to stdout
 *
 * Return: when program succeeds return 1
 * For error, return -1
 * @c: character to be printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
