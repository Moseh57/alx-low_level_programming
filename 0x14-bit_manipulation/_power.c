#include "main.h"
/**
 * _pow - a function to calculate the power
 * @b: the base
 * @ex: the exponential
 * Return: the result
 */
int _pow(int b, int ex)
{
	int i, j = 1;

	for (i = 0; i < ex; i++)
		j *= b;
	return (j);
}
