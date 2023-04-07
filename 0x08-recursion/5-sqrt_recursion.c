#include "main.h"
int squareroot(int, int);
/**
 * _sqrt_recursion - a function that calls the root func
 * @n: integer to find root
 * Return: the root function
 */
int _sqrt_recursion(int n)
{
	long int b;

	if (n == 1)
		return (1);
	b = n / 2;
	if (n <= 0 || b == 0)
		return (-1);
	else
		return (squareroot(n, b));
}
/**
 * squareroot - a function that finds the square root
 * @n: integer to find square root
 * @b: integer to check ans
 * Return: the root
 */
int squareroot(int n, int b)
{
	if (b <= 0)
		return (-1);
	else if (b * b > n)
	{
		return (squareroot(n, b - 1));
	}

	else if (b * b == n)
		return (b);
	else
		return (squareroot(n, b - 1));
}
