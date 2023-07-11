#include "main.h"
#include <stdlib.h>

void _util(char **, char *);
void _create_word(char **, char *, int, int, int);

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Returns a pointer to an array of strings (words).
 *         Returns NULL if str is NULL, empty, or contains only spaces.
 *
 * Description: This function takes a string and splits it into words,
 *              where each word is represented as a separate string in
 *              the resulting array. Words are separated by spaces.
 */
char **strtow(char *str)
{
	int i, flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = flag = len = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		i++;
	}

	len += flag == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);

	_util(words, str);
	words[len] = NULL;
	return (words);
}

/**
 * _util - A utility function for fetching words into an array.
 * @words: The array of strings.
 * @str: The string.
 */
void _util(char **words, char *str)
{
	int i, j, start, flag;

	i = j = flag = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
		{
			start = i;
			flag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			_create_word(words, str, start, i, j);
			j++;
			flag = 0;
		}

		i++;
	}

	if (flag == 1)
		_create_word(words, str, start, i, j);
}

/**
 * _create_word - Creates a word and inserts it into the array.
 * @words: The array of strings.
 * @str: The string.
 * @start: The starting index of the word.
 * @end: The ending index of the word.
 * @index: The index of the array to insert the word.
 */
void _create_word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		words[index][j] = str[start];
	words[index][j] = '\0';
}

