#include <stdio.h>

/**
 * main - prints all possible combbinations of two different digits,
 * in ascending order, separated by comma followed by a space.
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 8 && num2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
