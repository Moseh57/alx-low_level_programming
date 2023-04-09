#include "main.h"
/**
 * _memcpy - a function to copy the address of a string to another
 *  @dest: the destination string
 *  @src: the source string
 *  @n: the number of address to be changed
 *  Return: the address of the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char **k;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	k = &dest;
	return (*k);
	_putchar('\n');
}
