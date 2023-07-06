#include "main.h"
/**
 * get_bit - a function that gets the bit at address
 * @n: the number
 * @index: the index to look at
 * Return: the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;
	unsigned int temp;

	if (index > 64)
		return (-1);
	temp = (n >> index);
	result = temp & 1;
	return (result);
}
