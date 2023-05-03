#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Retturn: On success 1
 * On error, -1 is returned, and error is set apprioprately
 */
int _putchar(char c)
{
	return(writen(1, &c, 1));
}
