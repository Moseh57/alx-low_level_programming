#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that copies another string
 * @str: string to be copied
 * Return: the pointer to copied string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int j = 0;

	s = malloc(sizeof(char) * (j + 1));
	if (s == NULL || str == NULL)
		return (NULL);
	while (str[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
