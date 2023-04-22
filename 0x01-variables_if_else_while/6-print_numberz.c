#include <stdio.h>
/**
 * main - A program that prints all single digit numbers
 * followed by a new line,using putchar
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
