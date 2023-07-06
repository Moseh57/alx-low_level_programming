#include "main.h"
#include <stdio.h>
/**
 * flip_bits - a function that checks flips to be performed
 * @n: the first integer to look
 * @m: the second integer to look
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int j = 0;
	unsigned long int temp, exor;

	exor = n ^ m;
	for (i = 0; i < 32; i++)
	{
		temp = exor & (1 << i);
		if (temp > 0)
			j++;
	}
	return (j);
}
