#include "main.h"
/**
 * print_binary - a function that prints binary form of a number
 * @n: the decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int i, j = 0;

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;
		if ((temp & 1) == 1)
		{
			_putchar('1');
			j = 1;
		}
		else if (j == 1)
			_putchar(0x30);
	}
	if (j == 0)
		_putchar(0x30);
}
