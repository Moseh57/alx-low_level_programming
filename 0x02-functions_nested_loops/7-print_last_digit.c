#include "main.h"
/**
 * print_last_digit - checks for lowercase
 * @a: integer to be checked
 * Return: the last digit
 */

int print_last_digit(int a)
{
	a = (a % 10);
	if (a < 0)
		a = (a * -1);
	_putchar(a + '0');
	return (a);
}
