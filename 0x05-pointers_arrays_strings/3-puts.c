#include "main.h"

/**
 * _puts - Function that prints a string
 * followed by a new line
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		-putchar(*str++);
	}
	-putchar('\n');
}
