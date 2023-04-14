#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that checks the output of malloc
 * @b: integer size to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);
	if (d == NULL)
	{
		exit(98);
	}
	return (d);
}
