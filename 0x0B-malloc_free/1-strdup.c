#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string in memory.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 *         It returns NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((sizeof(char) * length) + 1);
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];
	duplicate[length] = '\0';

	return (duplicate);
}

