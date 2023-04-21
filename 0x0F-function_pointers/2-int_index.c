#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index -  a function that takes another function as parameter
 * @array: the array of integers to be checked
 * @size: the size of the array
 * @cmp: the pointer to the function
 * Return: -1 if fail, the index of the fist element of arrray
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 1 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
