#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0,
 * only using puchar and without char variables.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	putchar('\n');
	return (0);
}
