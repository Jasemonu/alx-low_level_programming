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
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src !='\0')
	{
		*dest = *src;
		dest++
		src++
	}
	*dest = '\0';
	return (s);
}
