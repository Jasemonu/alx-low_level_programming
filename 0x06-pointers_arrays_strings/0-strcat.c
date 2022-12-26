#include "main.h"

/**
*char *_strcat - a function that concatenates two strings.
*@dest: First parameter declaration
*@src: Second  parameter declaration
*
*Return: 0;
*/

char *_strcat(char *dest, char *src)
{
	char dest[];
	char src[];
	char *ptr;

	for (i = 0; i < '\0'; i++)
	{
		ptr = (dest['\0' + i] = src[i]);
			_putchar(ptr);
	}
	return (0);
}
