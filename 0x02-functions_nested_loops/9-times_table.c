#include "main.h"
/**
 * times_table - checks for lowercase
 * Return: the absolute value
 */

void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = (b * a);
			if (c > 9)
			{
				d = (c % 10);
				e = (c - d) / 10;
				_putchar(e + '0');
				_putchar(d + '0');
				if (b == 9)
				{
					_putchar('\n');
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(c + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	}

}
