#include "main.h"

/**
 *_puts_recursion - A function that prints a string followed by a new line
 *@s: declaration of the string
 *
 */

void _puts_recursion(char *s)
{
	char *s;

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursions(*s + 1);
	}
	else
	_putchar("\n");
}