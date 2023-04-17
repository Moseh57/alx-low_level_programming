#include "main.h"
#include <stdlib.h>
char *copier(char *g, char *g2, unsigned int);
/**
 * string_nconcat -  a function that calls the copier function
 * @s1: character to copy
 * @s2: character to copy
 * @n: integer length of s2
 * Return: the pointer to the function
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL && s2 != NULL)
			s1 = "";
		else if (s1 != NULL && s2 == NULL)
			s2 = "";
		else
		{
			s1 = "";
			s2 = "";
		}
		r = copier(s1, s2, n);
		return (r);
	}
	else
	{
		r = copier(s1, s2, n);
		return (r);
	}
}
/**
 * copier - a function to concentrate two strings
 * @g: character to copy
 * @g2: character to copy
 * @f: integer length of g2
 * Return: pointer to the copied string
 */
char *copier(char *g, char *g2, unsigned int f)
{
	unsigned int i = 0;
	unsigned int l = 0;
	unsigned int d = 0;
	char *s;
	unsigned int j, m;

	while (g[i] != '\0')
		i++;
	while (g2[l] != '\0')
		l++;
	if (l + 1 >= f)
		l = f;
	m = i + l + 1;
	s = malloc(sizeof(char) * m);
	if (s == NULL)
	{
		return (NULL);
		free(s);
	}
	for (j = 0; j < m; j++)
	{
		if (j < i)
			s[j] = g[j];
		else
		{
			s[j] = g2[d];
			d++;
		}
	}
	return (s);
	if (j > i + 1)
		s[j] = '\0';
}
