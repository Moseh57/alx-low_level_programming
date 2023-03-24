#include "main.h"
/**
 * print_line - a function to draw line
 * @n: an integer to be checked
 * Return: null
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
