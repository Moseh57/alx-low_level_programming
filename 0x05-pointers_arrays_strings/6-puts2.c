#include <stdio.h>
#include "main.h"
/**
 * puts2 - a function for printing a srting
 * @str: a character to be checked.
 */

void puts2(char *str)
{
	int a = 0;
	int t = 0;
	char *str2 = str;
	int b;

	while (*str2 != '\0')
	{
		str2++;
		a++;
	}
	t = a - 1;
	for (b = 0 ; b <= t ; b++)
	{
		if (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	}
	_putchar('\n');
}
