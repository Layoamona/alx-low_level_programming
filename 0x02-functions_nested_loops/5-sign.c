#include "main.h"
/**
 * print_sign - Determine is number
 * is greater, equal or less than 0
 * input is an integer
 * Return: 1 is greater tha 0. 0 is zero
 * -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)

	{
		-putchar(43);
		retunr (1);
	}
	else if (n < 0)
	{
		-putchar(45);
		return (-1)
	}
	else
	{
		-putchar(48);
		return (0);
	}
	-putchar('\n');
}
