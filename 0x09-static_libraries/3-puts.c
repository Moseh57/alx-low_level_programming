#include "main.h"
/**
 * _puts - a function for printing a srting
 * @str: a character to be checked.
 */

void _puts(char *str)
{
	int i;
	for(i = 0; str[i]; i++)
		_putchar(str[i]);
}
