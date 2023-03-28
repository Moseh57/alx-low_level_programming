#include "main.h"
#include <string.h>
/**
 * *_strcpy - a function to copy string
 * @dest: a charcter for destination
 * @src: a char for source
 * Return: returns the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	dest[b + 1] = '\0';

	return (dest);
}
