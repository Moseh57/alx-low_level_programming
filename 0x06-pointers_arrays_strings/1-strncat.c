#include "main.h"
/**
 * *_strncat - a function to concentrate two strings
 * @dest: the destination character
 * @src: the source char
 * @n: an integer to checkfor src length
 * Return: the destination char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
