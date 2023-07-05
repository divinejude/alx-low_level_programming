#include "main.h"

/**
 * str_checker - Checks if two strings are id, allowing wildcard char '*'.
 * @s1: Base address of the first string.
 * @s2: Base address of the second string.
 * @i: Left index.
 * @j: Special index (joker).
 *
 * Return: 1 if the strings are considered identical, 0 otherwise.
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - Compares two strings and checks if they can be cons id.
 * @s1: Base address of the first string.
 * @s2: Base address of the second string.
 *
 * Return: 1 if the strings are considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}

