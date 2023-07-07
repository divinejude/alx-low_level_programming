#include "main.h"

/**
 * _strpbrk - Locates the first occurrence of any char from a set in a string
 * @s: The string to be searched
 * @accept: The set of characters to search for
 *
 * Return: Pointer to the first occurrence of any character from the `accept`
 *         set in the string `s`, or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}

