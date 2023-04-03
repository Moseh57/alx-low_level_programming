#include "main.h"
/**
 * _strspn - a function that chaecks for a char from accept
 * @s: check string
 * @accept: string to be checked
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int k = 0;
	int h, z = 0;
	unsigned int f = 0;

	for (i = 0; s[i] != '\0'; i++)
		k++;
	for (h = 0; accept[h] != '\0'; h++)
		z++;
	for (i = 0; i < (z + 1); i++)
	{
		for (j = 0; j < (k + 1); j++)
		{
		if (accept[i] == s[j])
		{
			f = f + 1;
			break;
		}
		else
			continue;
		}
	}
	return (f);
}
