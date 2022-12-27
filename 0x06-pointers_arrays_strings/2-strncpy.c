#include "main.h"

/**
 *_strncpy - a function that copies a string
 *@dest: destination string
 *@src: source string
 *@n: the length of int
 *
 *Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		src[i] = dest[i]
	}
	src[i] = '\0';
	return (src);
}
