#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creares an array of size and assigns c
 * @size: size of the array to be created
 * @c: character to intialize with
 * Return: the pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int j;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		s[j] = c;
	}
	return (s);
}
