#include "main.h"

/**
 * set_string - This function sets the value of a pointer to a char
 * @s: this is pointer to pointer
 * @to: this pointer to char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
