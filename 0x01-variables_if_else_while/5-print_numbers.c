#include <stdio.h>
/**
 * main - A program that printsall single digit number of base 10
 * starting with 0, followed by a new line
 * Return: 0 (successs)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
