#include "main.h"

/**
 *_pow_recursion - A function that returns the value
 *	value of x raised to the power of y..
 *@x: An integer.
 *@y: An integer.
 *Return: value of the exponentiation.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
