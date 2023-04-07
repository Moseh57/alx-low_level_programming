#include "main.h"
int is_prime(int, int);
/**
 * is_prime_number - a function that checks if an integer is prime
 * @n: the integer to be checked
 * Return: the result
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
/**
 * is_prime - a function to check if prime
 * @n: a the integer to be checked
 * @i: the value to check aganist
 * Return: 1 if prime 0 otherwise
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i + 1));
}
