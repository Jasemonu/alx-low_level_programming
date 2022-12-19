#include "main.h"

/**
 *rev_string - A function that reverses a string
 *@s: string parameter input
 *Return: 0
 */

void rev_string(char *s)
{
	int l, i;
	char ch;

	/*find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*swap the string by looping to half the string*/
	for (i = 0; i < 1 / 2; ++i)
	{

		ch = s[i];
		s[i] = s[l - 1 - i]; /*-1 because the array starts from 0*/
		s[l - 1 - i] = ch;
	}
}
