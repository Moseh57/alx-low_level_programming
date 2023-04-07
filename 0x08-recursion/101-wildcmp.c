#include "main.h"
/**
 * wildcmp - a function that checks if strings are equal
 * @s1: the first string to be checked
 * @s2: the second string to be checked
 * Return: 1 if they are equal or 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	if (*s1 == '\0')
	{
		if (*s2 == '*' && *s2 != '\0')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
