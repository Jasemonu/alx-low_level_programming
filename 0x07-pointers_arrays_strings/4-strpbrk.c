#include "main.h"

/**
 *_strpbrk - function that searches a string for any of a set of bytes
 *
 *@s:first occurrence in the string
 *@accept: matches one of the bytes, or @NULL if no such byte
 *Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}

