#include "main.h"
/**
 * binary_to_uint - a finction that converts binary to decimal
 * @b: the binary number
 * Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0, k = 0;
	unsigned int a = 0;

	if (b == NULL)
		return (0);
	while (b[j] != '\0')
		j++;
	for (i = (j - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			if (k == 0)
				a += 1;
			else
			{
				a += (_pow(2, k));
			}
			k++;
		}
		else if (b[i] == '0')
			k++;
		else
			return (0);
	}
	return (a);
}
