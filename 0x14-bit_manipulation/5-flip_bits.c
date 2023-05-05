#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int j = 0;
	unsigned int temp, exor;

	exor = n ^ m;
	for (i = 0; i < 12; i++)
	{
		temp = exor & (1 << i);
		if (temp > 0)
			j++;
	}
	return (j);
}
