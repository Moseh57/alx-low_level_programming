#include "main.h"
/**
 * _isdigit - a function to check for a digit
 * @c: an integer that will be checked
 * Return: 0 if not and 1 if digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
