#include <stdio.h>

/**
 * main - Print all single digits numbers of base ten
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
		putchar(i);
	i++;

	putchar('\n');

	return (0);
}
