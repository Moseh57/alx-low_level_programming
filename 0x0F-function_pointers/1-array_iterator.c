#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function that executes another function
 * @array: an integet pointer to the array
 * @size: The size of the array
 * @action: the function to be called
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0 || array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
