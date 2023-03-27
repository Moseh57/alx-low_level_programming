#include <string.h>
#include "main.h"
/**
 * rev_string - a function to print in reverse order
 * @s: a character to be reversed
 */

void rev_string(char *s)
{
	int k;
	int i;
	int p;
	char temp [893];

	p = 0;
	i = (strlen(s) - 1);
	for (k = i; k >= 0; k--)
	{
		if (p <= 9)
		{
			temp[p] = s[k];
			p++;
		}
	}
	for (k = 0; k <= i; k++)
	{
		s[k] = temp[k];
	}
}
