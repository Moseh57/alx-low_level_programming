#include "main.h"
/**
 * _memset - a function that changes the address of a string
 * @s: the string to change the address
 * @b: the character to replace with
 * @n: the length of the address
 * Return: the new adress
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char **j;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	j = &s;
	_putchar('\n');
	return (*j);
}
