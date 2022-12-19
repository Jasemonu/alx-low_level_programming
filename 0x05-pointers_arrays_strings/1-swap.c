#include "main.h"

/**
 *swap_in -A function that swaps the values of two integers
 *	using two input parameters
 *@a: parameter 1
 *@b: parameter 2
 *
 *Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
