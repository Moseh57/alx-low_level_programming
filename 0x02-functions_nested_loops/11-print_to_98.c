#include "main.h"
/**
 * print_to_98 - checks for lowercase
 * @int: an integer
 * Return: the absolute value
 */

void print_3(int);
void print_2(int);
void print_to_98(int n)
{
	int d;
	int f;

	if (n > 98)
		print_3(n);
	else
	{
	f = n;
	for (d = n; d <= 98; d++)
	{
		if (d >= 0 && d <= 9)
		{
			_putchar(d + '0');
			_putchar(',');
			_putchar(' ');
		}
		if (d > 9)
		{
			print_2(d);
		}
		if (d < 0)
		{
			f = (d * -1);
			if (f > 9)
			{
				_putchar('-');
				print_2(f);
			}
			else
			{
			_putchar('-');
			_putchar(f + '0');
			_putchar(',');
			_putchar(' ');
			}
		}
	}
	_putchar('\n');
	}
}
/**
 * print_2 - returns for negative
 * @r: integer to literate
 * Return: nulll
 */
void print_2(int r)
{
	int c, e;

	c = (r % 10);
	e = (r - c) / 10;
	_putchar(e + '0');
	_putchar(c + '0');
	if (r < 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}
/**
 * print_3 - returns for greater than 98
 * @j: integer to iterate
 * Return: null
 */
void print_3(int j)
{
	int q, c, e, s, t;

	for (q = j; q >= 98; q--)
	{
		c = (q % 10);
		e = (q - c) / 10;
		t = (e % 10);
		s = (e - t) / 10;
		if (q >= 100)
		{
			_putchar(s + '0');
			_putchar(t + '0');
		}
		else
			_putchar(e + '0');
		_putchar(c + '0');
		if (q == 98)
			break;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
