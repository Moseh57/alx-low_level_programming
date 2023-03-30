#include "main.h"
/**
 * reverse_array - a function to reverse an array
 * @a: the array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
