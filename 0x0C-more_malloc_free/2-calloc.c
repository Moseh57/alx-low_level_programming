#include "main.h"
#include <stdlib.h>
char *changer(char i, char *j, unsigned int k);
/**
 * _calloc - a function that allocates memory
 * @nmemb: an integer for array
 * @size: an integer for size of bite
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;

	if (nmemb == 0 || size == 0)
		return (NULL);
	r = malloc(size * nmemb);
	if (r == NULL)
		return (NULL);
	changer(0, r, nmemb * size);
	return (r);
}
/**
 * changer -  a function to fill the memory
 * @i: character for the array
 * @j: the array element
 * @k: the integer for the size
 * Return: pointer to the array
 */
char *changer(char i, char *j, unsigned int k)
{
	unsigned int n;

	for (n = 0; n < k; n++)
		j[n] = i;
	return (j);
}
