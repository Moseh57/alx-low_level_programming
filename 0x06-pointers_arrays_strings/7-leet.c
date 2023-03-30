#include "mian.h"
/**
 * leet - a function to encode
 * @n: character to be encoded
 * Return: encoded char
 */

char *leet(char *n)
{
	int a;
	int d;
	char b[] = "aAeEoOtTlL";
	char c[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (d = 0; d < 10; d++)
		{
			if (n[a] == b[d])
			{
				n[a] = c[d];
			}
		}
	}
	return (n);
}
