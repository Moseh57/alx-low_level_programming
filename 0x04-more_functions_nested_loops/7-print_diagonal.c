#include "main.h"
/**
 * print_diagonal - a function to draw a diagonal line
 * @n: an integer to be checked
 * Return: null
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (j = 1; j <= n ; j++)
	{
	_putchar(92);
	_putchar('\n');
	for (i = 0; i < (j + 1); i++)
	{
		_putchar(' ');
	}
	}
	}
}
