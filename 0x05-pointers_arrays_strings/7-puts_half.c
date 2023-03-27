#include "main.h"
/**
 * puts_half - afunction to print
 * @str: a character
 */

void puts_half(char *str)
{
	int a = 0;
	int t;
	int z;
	int y = 1;
	int b;

	for (t = 0; t < y; t++)
	{
		if (str[t] == '\0')
		{
			break;
		}
		a++;
		y++;
	}
	z = a / 2;
	if (a % 2 != 0)
	{
		z = (a + 1) / 2;
	}
	for (b = z ; b < a ; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
