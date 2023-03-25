#include "main.h"
/**
 * print_square - a function that prints a square
 * @size: variable to be created square for
 * Return: void
 */

void print_square(int size)
{
	int j;
	int i;

	for (j = 0; j < size; j++)
	{
		i = 0;
		for (; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
