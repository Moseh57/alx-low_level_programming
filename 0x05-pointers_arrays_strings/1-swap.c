#include "main.h"
/**
 * swap_int - a function two swap two integers
 * @a: integer to be swaped
 * @b: integer to be swaped
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
