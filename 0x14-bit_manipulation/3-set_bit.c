#include "main.h"
/**
 * set_bit - a function that sets a given index on a number to 1
 * @n: the pointer to the number
 * @index: the index to set the number to
 * Return: the new set number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n |= (1 << index);
	return (1);
}
