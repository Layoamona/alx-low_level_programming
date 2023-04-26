#include "main.h"
/**
 * isalpha.c - Function that checks for alphabetic character
 * print 1 if input is lowercase or uppercase
 * print 0 if otherwise
 * Return: 1 for lower and uppercase. 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	-putchar('\n');
}
