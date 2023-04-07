#include "main.h"
/**
 * _strlen_recursion - a function that calculates the length of a string
 * @s: string to be checked
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i  + _strlen_recursion(s + 1);
	}
	return (i);
}
