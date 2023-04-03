#include "main.h"
/**
 * _strchr - a function to ceck for a charcter in a string
 * @s: the string
 * @c: the character
 * Return: the address of the character
 */
char *_strchr(char *s, char c)
{
	int i;
	int j = 0;
	char *k;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	for (i = 0; i < j; i++)
	{
		if (s[i] == c)
		{
			k = &s[i];
			break;
		}
		else
		{
			continue;
		}
	}
	return (k);
	_putchar('\n');
}
