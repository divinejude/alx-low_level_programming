#include "main.h"

/**
 * malloc_checked - this would cause norm. proc. term. with a status val. of 98
 *
 * @b: this is the argument of allocated memory
 *
 * Return: the func. returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
