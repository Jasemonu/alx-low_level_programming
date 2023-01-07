#include "main.h"

/**
 *str_checker - check if two strings are identical.
 *@s1: string 1.
 *@s2: string 2. It can contains a * as a special character.
 *@i: left index.
 *@j: special index. (joker)
 *Return: 1 if are identical, 0 if not.
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
 *wildcmp - check if strings could be considered identical
 *@s1: base address for string.
 *@s2: base address for string.
 *
 *Return: 1 if are considered identical.
 */

int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}

