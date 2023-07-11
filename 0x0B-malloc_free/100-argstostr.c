#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program into a string.
 * @ac: The number of arguments.
 * @av: The array of argument strings.
 *
 * Return: On success, returns a pointer to a newly allocated string that
 *         contains the concatenated arguments, separated by newlines.
 *         Returns NULL if ac is 0 or if memory allocation fails.
 *
 * Description: This function takes the command-line arguments passed to the
 *              program and concatenates them into a single string. Each
 *              argument is separated by a newline character ('\n') in the
 *              resulting string.
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}

