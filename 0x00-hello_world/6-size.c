#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (success)
 */
 int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %zu byte($)\n", sizeof(a));
	printf("Size of an int: %zu byte($)\n", sizeof(b));
	printf("Size of a long int: %zu byte($)\n", sizeof(c));
	printf("Size of a long long int: %zu byte($)\n", sizeof(d));
	printf("Size of a float: %zu byte($)\n", sizeof(f));
	return (0);
}
