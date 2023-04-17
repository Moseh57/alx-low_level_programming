#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates array of integers
 * @min: the minimum range
 * @max: the maximum range
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *r;
	int i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	r = malloc(sizeof(int) * j);
	if (r == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		r[i] = min;
		min++;
	}
	return (r);
}

