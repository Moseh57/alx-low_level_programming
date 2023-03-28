#include "main.h"
#include <string.h>
/**
 *
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int i;
	int b;
	int d = 1;

	for (i = 0; i < d; i++)
	{
		if (src[i] != '\0')
		{
			a++;
			d++;
		}
	}
	for (b=0; b < a ; b++) {
		dest[b] = src[b];
	}
	dest[b+1] = '\0';

	return (dest);
}
