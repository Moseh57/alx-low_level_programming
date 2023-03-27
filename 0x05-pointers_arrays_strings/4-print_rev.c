#include <string.h>
#include "main.h"
/**
 * print_rev - a function to print in reverse order
 * @s: a character to be reversed
 */

void print_rev(char *s)
{
	int k;
	int i;

	i = (strlen(s) - 1);
	for (k = i; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
