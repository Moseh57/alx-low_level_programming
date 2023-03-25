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
		for (j = 0; j <= (n - 1) ; j++)
		{
			_putchar(92);
			_putchar('\n');
			i = 0;
			for (; i <= j; i++)
			{
				if (j == (n - 1))
					break;
				_putchar(' ');
			}
		}
	}
}
