#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: A pointer to a newly allocated memory block containing the
 *         concatenation of s1 and s2, null-terminated. It is the
 *         responsibility of the caller to free this memory. If either
 *         s1 or s2 is NULL, it will be treated as an empty string.
 *         If memory allocation fails, it returns NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0;
	int i, j;
	char *concatenated;

	if (s1 != NULL)
	{
		while (s1[len_s1] != '\0')
			len_s1++;
	}

	if (s2 != NULL)
	{
		while (s2[len_s2] != '\0')
			len_s2++;
	}

	concatenated = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < len_s2; j++, i++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}

