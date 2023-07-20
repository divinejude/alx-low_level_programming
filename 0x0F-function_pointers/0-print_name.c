#include "function_pointers.h"

/**
 * print_name - afunctionthat prints a name.
 * @name: the namegiven
 * @f: function o name lslks
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
