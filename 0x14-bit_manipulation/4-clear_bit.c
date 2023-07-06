#include "main.h"
/**
 * clear_bit - a function that clears a bit at a given index
 * @n: the number to clear
 * @index: the index to clear at
 * Return: 1 if success -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
