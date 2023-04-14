#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *copier(char *g, char *g2);
/**
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *x;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL && s2 != NULL)
			s1 = "";
		else if (s2 == NULL && s1 != NULL)
			s2 = "";
		else
		{
			s1 = "";
			s2 = "";
		}
		x = copier(s1, s2);
		return (x);
	}
	else
	{
		x = copier(s1, s2);
		return (x);
	}
}
char *copier(char *g, char *g2)
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
	m = i + l + 1;
	s = malloc(sizeof(char) * m);
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
}
