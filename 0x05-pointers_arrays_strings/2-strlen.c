#include "main.h"

/**
 * _strlen - Function that returns length of string
 * @s: string to return
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
