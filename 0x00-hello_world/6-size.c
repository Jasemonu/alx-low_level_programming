#include <stdio.h>
/**
 * main - Print out sizes of data types in C
 * Return: 0
 */
int main(void)
{
	char charType;
	int intType;
	float floatType;
	long int longType;
	long long int longLongType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longLongType));
	return (0);
}
