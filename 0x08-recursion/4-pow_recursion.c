#include "main.h"
/**
 * _pow_recursion - a function to find powr
 * @x: the integer to find power
 * @y: the integer to find power to
 * Return: the value of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
