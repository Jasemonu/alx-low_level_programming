#include <stdio.h>
#include "main.h"

/**
 *print_numbers - A function that prints numbers from zero to nine
 *
 *Return: 0
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar (0);
}
