#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: integer to be checked
 * Return: 1 if lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
