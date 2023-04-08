#include "main.h"
/**
 * _strspn - a function that chaecks for a char from accept
 * @s: check string
 * @accept: string to be checked
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
		if (accept[i] == s[j])
		{
			break;
		}
		}
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}
