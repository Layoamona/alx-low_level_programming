#include "main.h"

/**
 * *_strcat -  function that concatenates two strings
 * @dest: the string to append to
 * @src: the string to add
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, p;

	i = 0;
	p = 0;

	while (dest[i] != '\0')
		i++;
	while (scr[i] != '\0')
	{
		dest[i] = scr[p];
		p++;
		i++;
	}
	dest[i] = '\0'
	return (dest);
}
